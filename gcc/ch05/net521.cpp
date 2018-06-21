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
	
	senddata( sock, "Message-ID: %08X@localhost\r\n", tt );
	senddata( sock, "Reply-To: <00000000@localhost>\r\n" );
	strftime( buf, sizeof(buf), "Date: %a, %d %b %Y %H:%M:%S GMT\r\n", t );
	senddata( sock, buf );
	senddata( sock, "Subject: test mail\r\n" );
	senddata( sock, "From: masuda <masuda@localhost>\r\n" );
	senddata( sock, "\r\n" );
	senddata( sock, "Hi. This is test mail.\r\n" );
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
