#include <stdio.h>
#ifdef _MSC_VER
#include <winsock2.h>
#else
#include <sys/unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include <stdarg.h>
#endif
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

#define ISKIN(p)		( *(p)=='\x1B' && *((p)+1)=='$' && (*((p)+2)=='B' || *((p)+2)=='@' ))
#define ISKOUT(p)		( *(p)=='\x1B' && *((p)+1)=='(' && (*((p)+2)=='B' || *((p)+2)=='J' ))
#define ISHANKAKU(p)	( *(p)=='\x1B' && *((p)+1)=='(' && *((p)+2)=='I' )
#define JISTOSJIS1(c0,c1)	((((c0)+1)>>1) + ((c0)<0x5F? 0x70: 0xB0))
#define JISTOSJIS2(c0,c1)	((c1) + ((c0) % 2 ? ((c1) > 0x5F ? 0x20 : 0x1F ) : 0x7E ))
int jis2sjis( const char *bufin, char *bufout )
{
	enum { eASCII, eKANJI, eKANA } state;

	unsigned char *pin = (unsigned char*)bufin;
	unsigned char *pout = (unsigned char*)bufout;
	state = eASCII;
	while ( *pin != '\0' ) {
		if ( ISKIN(pin) ) {					// 漢字 IN 検出
			state = eKANJI;
			pin += 3;
		} else if ( ISKOUT(pin) ) {			// 漢字 OUT 検出
			state = eASCII;
			pin += 3;
		} else if ( ISHANKAKU(pin) ) {		// 半角カタカナ
			state = eKANA;
			pin += 3;
		} else if ( state == eASCII ) {
			*pout++ = *pin++;
		} else if ( state == eKANA ) {
			*pout++ = *pin++ | 0x80;
		} else {
			if ( pin[1] == '\0' ) {
				// 変換エラー
				*pout++ = pin[0];
				break;
			}
			*pout++ = JISTOSJIS1( pin[0], pin[1] );
			*pout++ = JISTOSJIS2( pin[0], pin[1] );
			pin += 2;
		}
	}
	*pout = '\0';

	return strlen( (char*)bufout );
}

int header_decode( char *bufin, char *bufout )
{
	static unsigned char base64[] = {
 		 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0,62, 0, 0, 0,63,
		52,53,54,55,56,57,58,59,  60,61, 0, 0, 0, 0, 0, 0,	// = は 0 扱い
		 0, 0, 1, 2, 3, 4, 5, 6,   7, 8, 9,10,11,12,13,14,
		15,16,17,18,19,20,21,22,  23,24,25, 0, 0, 0, 0, 0,
		 0,26,27,28,29,30,31,32,  33,34,35,36,37,38,39,40,
		41,42,43,44,45,46,47,48,  49,50,51, 0, 0, 0, 0, 0,

		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, };
		
	unsigned char *pin = (unsigned char*)bufin;
	unsigned char *pout = (unsigned char*)bufout;
	unsigned char *p;
	bool state = false;

	while ( *pin != '\0' ) {
		if ( *pin == '=' && *(pin+1) == '?' ) {
			p = pin;
			pin += 2;
			while ( *pin != '\0' ) {
				if ( *pin++ == '?' ) break;
			}
			if (( *pin == 'B' || *pin == 'b' ) && *(pin+1) == '?' ) {
				pin += 2;
				while ( *pin != '\0' ) {
					if ( pin[0] == '?' && pin[1] == '=' ) {
						pin += 2;
						break;
					}
					if ( pin[1] == '\0' || pin[2] == '\0' || pin[3] == '\0' ) break;
					*pout++ = (base64[pin[0]] << 2) | (base64[pin[1]] >> 4);
					if ( pin[2] != '=' ) *pout++ = (base64[pin[1]] << 4) | (base64[pin[2]] >> 2);
					if ( pin[3] != '=' ) *pout++ = (base64[pin[2]] << 6) | base64[pin[3]] ;
					pin += 4;
				}
			} else if (( *pin == 'Q' || *pin == 'q' ) && *(pin+1) == '?' ) {
				pin += 2;
				while ( *pin != '\0' ) {
					if ( pin[0] == '?' && pin[1] == '=' ) {
						pin += 2;
						break;
					} else if ( pin[0] == '=' ) {
						if ( pin[1] == '\0' || pin[2] == '\0' ) break;
						if ( ('0' <= pin[1] && pin[1] <= '9') ||
						     ('A' <= pin[1] && pin[1] <= 'F') ) {
							*pout++ = ((('0'<=pin[1]&&pin[1]<='9')? pin[1]-'0':pin[1]-'A'+10)<<4)
							        |  (('0'<=pin[2]&&pin[2]<='9')? pin[2]-'0':pin[2]-'A'+10);
							pin += 3;
						} else {
							*pout++ = pin[1];
							pin += 2;
						}
					} else {
						*pout++ = *pin++;
					}
				}
			} else {
				// 対応していない
				pin = p;
				while ( *pin != '\0' ) {
					if ( pin[0] == '?' && pin[1] == '=' ) {
						*pout++ = *pin++;
						*pout++ = *pin++;
						break;
					}
					*pout++ = *pin++;
				}
			}
			state = true;
		} else {
			if ( *pin != ' ' ) state = false;
			*pout++ = *pin++;
		}
	}
	*pout = '\0';

	bufin = new char[strlen(bufout)+1];
	strcpy( bufin, bufout );
	// JIS -> SJIS 変換
	jis2sjis( bufin, bufout );
	delete [] bufin;

	return strlen( (char*)bufout );
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
	addr.sin_port = htons(110);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	printf( "connect pop3 ...\n" );
	ret = connect( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "can't open pop3 port\n" );
		return 0;
	}
	
	char buf[1000], buf2[1000];
	int n;

	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	
	senddata( sock, "USER %s\r\n", "tomoaki" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	senddata( sock, "PASS %s\r\n", "masuda" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	senddata( sock, "UIDL\r\n" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	int id = 0;
	for (;;) {
		n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
		printf( "S:%s", buf );
		if ( n >= 3 ) {
			if ( buf[n-1] == '\n' && buf[n-2] == '\r' && buf[n-3] == '.' ) {
				break;
			}
		}
		id++;
	}
	if ( id != 0 ) {
		senddata( sock, "RETR %d\r\n", id );
		n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
		printf( "S:%s", buf );
		for (;;) {
			n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
			if ( strncasecmp( buf, "Subject:", 8 ) == 0 ) {
				header_decode( buf, buf2 );
				strcpy( buf, buf2 );
			}
			printf( "S:%s", buf );
			if ( buf[0] == '\r' && buf[1] == '\n' ) break;
		}
		for (;;) {
			n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
			jis2sjis( buf, buf2 );
			printf( "S:%s", buf2 );
			if ( buf[n-1] == '\n' && buf[n-2] == '\r' && buf[n-3] == '.' ) {
				break;
			}
		}
	}

	senddata( sock, "QUIT\r\n" );
	
	shutdown( sock, 2 );
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
