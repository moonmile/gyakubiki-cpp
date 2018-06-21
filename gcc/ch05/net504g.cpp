#include <stdio.h>
#include <sys/unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include <string.h>

int main( void )
{
	int sock;
	struct sockaddr_in addr;
	int ret ;
	struct hostent *hostinfo;
	unsigned long 	inetaddress;
	const char *hostname = "localhost";

	addr.sin_family      = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port        = htons(8080);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	ret = bind( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "bind で失敗\n" );
		return 0;
	}
	ret = listen( sock, SOMAXCONN );
	if ( ret < 0 ) {
		printf( "listen で失敗\n" );
		return 0;
	}
	
	while ( 1 ) {
		int sockc;
		struct sockaddr_in addrc;
		socklen_t sockc_len;
		
		sockc_len = sizeof( addrc );
		printf( "accept ...\n" );
		sockc = accept( sock, (struct sockaddr *)&addrc, &sockc_len );
		if ( sockc < 0 ) {
			printf( "accept で失敗\n" );
			continue;
		}
		
		char buf[256];
		int n;
		n = recv( sockc, buf, sizeof(buf)-1, 0 );
		if ( n <= 0 ) continue;
		buf[n] = '\0';
		printf( "recv data\n%s\n", buf );
		
		struct tm *t;
		time_t tt;
		char bufout[256];
	
		time( &tt );
		t = localtime( &tt );
		sprintf( bufout, "HTTP/1.1 200 OK\r\n\r\nserver time: %s", asctime( t ));
		send( sockc, bufout, strlen( bufout ), 0 );
		close( sockc );
	}
	close( sock );
}
