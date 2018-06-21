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

int senddata( int sock, char *format, ... )
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

int encode_base64( char *bufin, int len, char *bufout )
{
	static unsigned char base64[] = 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
	unsigned char *pin  = (unsigned char*)bufin;
	unsigned char *pout = (unsigned char*)bufout;
	
	for ( int i=0; i<len-2; i += 3 ) {
		*pout++ = base64[ pin[0] >> 2 ];
		*pout++ = base64[ 0x3F & ((pin[0] << 4) | (pin[1] >> 4)) ];
		*pout++ = base64[ 0x3F & ((pin[1] << 2) | (pin[2] >> 6)) ];
		*pout++ = base64[ 0x3F & pin[2] ];
		pin += 3;
	}
	if ( len % 3 == 1 ) {
		*pout++ = base64[ pin[0] >> 2 ];
		*pout++ = base64[ 0x3F & (pin[0] << 4) ];
		*pout++ = '=';
		*pout++ = '=';
	} else if ( len % 3 == 2 ) {
		*pout++ = base64[ pin[0] >> 2 ];
		*pout++ = base64[ 0x3F & ((pin[0] << 4) | (pin[1] >> 4)) ];
		*pout++ = base64[ 0x3F & ( pin[1] << 2) ];
		*pout++ = '=';
	}
	*pout = '\0';
	return pout - (unsigned char*)bufout;
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

	senddata( sock, "HELO %s\r\n", "localhost" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "MAIL FROM:<%s>\r\n", "masuda@local" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "RCPT TO:<%s>\r\n", "yumi@local" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	senddata( sock, "DATA\r\n" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );

	time_t tt;
	struct tm *t;
	time( &tt );
	t = localtime( &tt );
	char boundary[] = "THIS IS ATTACHMENT";
	senddata( sock, "Message-ID: %08X@localhost\r\n", tt );
	strftime( buf, sizeof(buf), 
	  "Date: %a, %d %b %Y %H:%M:%S GMT\r\n", t );
	senddata( sock, buf );
	senddata( sock, "Subject: attachment test\r\n", buf );
	senddata( sock, "From: masuda <masuda@localhost>\r\n" );
	senddata( sock, "MIME-Version: 1.0\r\n" );
	senddata( sock, 
	  "Content-Type: multipart/mixed; boundary=\"%s\"\r\n",
	  boundary );
	senddata( sock, "\r\n" );
	
	senddata( sock, "--%s\r\n", boundary );
	senddata( sock, "This is multipart message.\r\n" );
	senddata( sock, "\r\n" );
	senddata( sock, "--%s\r\n", boundary );
	senddata( sock, "Content-Type: application/octet-stream\r\n" );
	senddata( sock, "Content-Transfer-Encoding: base64\r\n" );
	senddata( sock, 
	   "Content-Disposition: attachment; filename=\"%s\"\r\n",
	   "net525.cpp" );
	senddata( sock, "\r\n" );
		
	FILE *fp = fopen("net525.cpp","r");
	char buffer[54];
	while ( (n=fread( buffer, 1, sizeof(buffer), fp ))>0 ) {
		n = encode_base64( buffer, n, buf );
		buf[n] = '\r';
		buf[n+1] = '\n';
		buf[n+2] = '\0';
		senddata( sock, buf );
		if ( n < sizeof( buffer )) break;
	}
	fclose( fp );
	
	senddata( sock, "--%s--\r\n", boundary );

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
