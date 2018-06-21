#include <stdio.h>
#include <time.h>
#include <winsock.h>

void main( void )
{
	WSADATA wsadata;

	if ( WSAStartup( 0x0101, &wsadata ) != 0 ) {
		printf( "WSAStartup �̎��s�Ɏ��s %d\n", WSAGetLastError());
	}
	
	int sock;
	struct sockaddr_in addr;
	int ret ;
	struct hostent *hostinfo;
	unsigned long 	inetaddress;
	char *hostname = "localhost";

	addr.sin_family      = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port        = htons(8080);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	ret = bind( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "bind �Ŏ��s\n" );
		return ;
	}
	ret = listen( sock, SOMAXCONN );
	if ( ret < 0 ) {
		printf( "listen �Ŏ��s\n" );
		return ;
	}
	
	while ( 1 ) {
		int sockc;
		struct sockaddr_in addrc;
		int sockc_len;
		
		sockc_len = sizeof( addrc );
		printf( "accept ...\n" );
		sockc = accept( sock, (struct sockaddr *)&addrc, &sockc_len );
		if ( sockc < 0 ) {
			printf( "accept �Ŏ��s\n" );
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
		sprintf( bufout, 
		  "HTTP/1.1 200 OK\r\n\r\nserver time: %s", asctime( t ));
		send( sockc, bufout, strlen( bufout ), 0 );
		closesocket( sockc );
	}
	closesocket( sock );
	WSACleanup();
}
