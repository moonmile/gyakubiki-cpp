#include <stdio.h>
#include <time.h>
#include <winsock.h>

int main( void )
{
	WSADATA wsadata;

	if ( WSAStartup( 0x0101, &wsadata ) != 0 ) {
		printf( "WSAStartup の実行に失敗 %d\n", WSAGetLastError());
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
		printf( "bind で失敗\n" );
		return ;
	}
	ret = listen( sock, SOMAXCONN );
	if ( ret < 0 ) {
		printf( "listen で失敗\n" );
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
			printf( "accept で失敗\n" );
			continue;
		}
		struct sockaddr_in addr = addrc;
		printf("accept port:%d addr:%d.%d.%d.%d\n", 
			addr.sin_port, 
			addr.sin_addr.S_un.S_un_b.s_b1,
			addr.sin_addr.S_un.S_un_b.s_b2,
			addr.sin_addr.S_un.S_un_b.s_b3,
			addr.sin_addr.S_un.S_un_b.s_b4 );
		
		closesocket( sockc );
	}
	closesocket( sock );
	WSACleanup();
}
