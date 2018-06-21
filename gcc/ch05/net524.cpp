#include <stdio.h>
#ifdef _MSC_VER
#include <winsock2.h>
#else
#include <sys/unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#endif
#include <time.h>
#include <stdarg.h>
#include <string.h>

int senddata( int sock, const char *format, ... )
{
	va_list ap;
	char buf[1024];
	int n;

	va_start( ap, format );
	vsprintf( buf, format, ap );
	printf( "C:%s", buf );
	n = send( sock, buf, strlen(buf), 0 );
	va_end( ap );
	return n;
}

#define ISKANJI(c)	(0x81 <= (c) && (c) <= 0x9F || 0xE0 <= (c) && (c) <= 0xEF)
#define SJISTOJIS1(c0,c1)	((((c0)-((c0)<0xA0?0x70:0xB0))<<1)-((c1)<0x9F?1:0))
#define SJISTOJIS2(c0,c1)	((c1)-((c1)<0x9F?((c1)>0x7F?0x20:0x1F):0x7E))
int sjis2jis( const char *bufin, char *bufout )
{
	unsigned char *pin = (unsigned char *)bufin;
	unsigned char *pout = (unsigned char *)bufout;
	bool state = false;
	
	while ( *pin != '\0' ) {
		if ( ISKANJI(*pin) ) {			// 漢字１バイト目
			if ( !state ) {
				*pout++ = '\x1B';
				*pout++ = '$';
				*pout++ = 'B';
				state = true;
			}
			*pout++ = SJISTOJIS1(*pin,*(pin+1));
			*pout++ = SJISTOJIS2(*pin,*(pin+1));
			pin += 2;
		} else {						// ASCII
			if ( state ) {
				*pout++ = '\x1B';
				*pout++ = '(';
				*pout++ = 'B';
				state = false;
			}
			*pout++ = *pin++;
		}
	}
	if ( state ) {
		*pout++ = '\x1B';
		*pout++ = '(';
		*pout++ = 'B';
	}
	*pout = '\0';
	return strlen((char*)bufout);
}

#define ISKIN(p)		( *(p)=='\x1B' && *((p)+1)=='$' && (*((p)+2)=='B' || *((p)+2)=='@' ))
#define ISKOUT(p)		( *(p)=='\x1B' && *((p)+1)=='(' && (*((p)+2)=='B' || *((p)+2)=='J' ))
int header_encode( char *bufin, char *bufout )
{
	// SJIS -> JIS 変換
	sjis2jis( bufin, bufout );
	bufin = new char[ strlen(bufout)+1 ];
	strcpy( bufin, bufout );
	
	const unsigned char base64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
	char *pin  = bufin;
	char *pout = bufout;
	char *pbase ;
	bool state = false;
	while ( *pin != '\0' ) {
		if ( !state && ISKIN(pin) ) {			// 漢字 IN 検出
			memcpy( pout, "=?ISO-2022-JP?B?", 16 );
			pout += 16;
			pbase = pin;
			pin  += 3;
			state = true;
		} else if ( state && ISKOUT(pin) ) {	// 漢字 OUT 検出
			pin += 3;
			while ( pin - pbase >= 3 ) {
				*pout++ = base64[ pbase[0] >> 2 ];
				*pout++ = base64[ 0x3F & ((pbase[0] << 4) | (pbase[1] >> 4)) ];
				*pout++ = base64[ 0x3F & ((pbase[1] << 2) | (pbase[2] >> 6)) ];
				*pout++ = base64[ 0x3F & pbase[2] ];
				pbase += 3;
			}
			if ( pin - pbase == 1 ) {
				*pout++ = base64[ pbase[0] >> 2 ];
				*pout++ = base64[ 0x3F & (pbase[0] << 4) ];
				*pout++ = '=';
				*pout++ = '=';
			} else if ( pin - pbase == 2 ) {
				*pout++ = base64[ pbase[0] >> 2 ];
				*pout++ = base64[ 0x3F & ((pbase[0] << 4) | (pbase[1] >> 4)) ];
				*pout++ = base64[ 0x3F & (pbase[1] << 2) ];
				*pout++ = '=';
			}
			*pout++ = '?';
			*pout++ = '=';
			state = false;
		} else if ( !state ) {
			if ( *pin == '\n' ) {
				*pout++ = *pin++;
				if ( *pin != '\0' && *pin != ' ' ) *pout++ = ' ';
			} else {
				*pout++ = *pin++;
			}
		} else {
			pin++;
		}
	}
	if ( *pout == ' ' ) pout--;
	*pout = '\0';
	delete [] bufin ;
	return strlen( bufout );
}

int main( void )
{
	int sock, ret;
	struct sockaddr_in addr;

#ifdef _MSC_VER
	{
	WSADATA wsadata;
	WSAStartup( 0x0101, &wsadata );
	}
#endif
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(25);	
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	printf( "connect smtp ...\n" );
	ret = connect( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "can't open smtp port\n" );
		return 0;
	}
	
	char buf[1000];
	int n;

	n = recv( sock, buf, sizeof(buf)-1, 0 );
	buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "HELO %s\r\n", "mailsample.net" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "MAIL FROM:<%s>\r\n", "tomoaki@mailsample.net" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "RCPT TO:<%s>\r\n", "yumi@mailsample.net" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "DATA\r\n" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	time_t tt;
	struct tm *t;
	time( &tt );
	t = localtime( &tt );
	
	senddata( sock, "Message-ID: %08X@localhost\r\n", tt );
	strftime( buf, sizeof(buf), 
	  "Date: %a, %d %b %Y %H:%M:%S +0900\r\n", t );
	senddata( sock, buf );
	header_encode( "Subject: 日本語の件名\r\n", buf );
	senddata( sock, buf );
	senddata( sock, "From: masuda <masuda@localhost>\r\n" );
	senddata( sock, "MIME-Version: 1.0\r\n" );
	senddata( sock, 
	  "Content-Type: text/plain; charset=iso-2022-jp\r\n" );
	senddata( sock, "\r\n" );
	
	sjis2jis( "こんにちは、これは test mail です\r\n", buf );
	senddata( sock, buf );
	senddata( sock, ".\r\n" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	
	senddata( sock, "QUIT\r\n" );
	
	shutdown( sock, 2 );
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
