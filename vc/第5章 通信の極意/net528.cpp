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
	
	char buf[1000];
	int n;

	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	
	senddata( sock, "USER %s\r\n", "tomoaki" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	senddata( sock, "PASS %s\r\n", "masuda" );
	n = recv( sock, buf, sizeof(buf)-1, 0 ); buf[n] = '\0';
	printf( "S:%s", buf );
	senddata( sock, "STAT\r\n" );
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
