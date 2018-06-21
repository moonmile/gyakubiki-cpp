#include <stdio.h>
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

	inetaddress = inet_addr( hostname );
	if ( inetaddress == INADDR_NONE ) {
		hostinfo = gethostbyname( hostname );
		if ( hostinfo == 0 ) {
			// ホスト名解決に失敗
			return ;
		}
		inetaddress = *(unsigned long *)hostinfo->h_addr_list[0];
	}
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inetaddress;
	addr.sin_port = htons(80);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	ret = connect( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "localhost 80 に接続できなかった" );
		return ;
	}
	
	char get[] = "GET /index.html HTTP/1.0\r\n\r\n";
	send( sock, get, strlen(get), 0 );
	
	char buf[256];
	int n;
	printf( "recv data\n" );
	while ( 1 ) {
		n = recv( sock, buf, sizeof(buf)-1, 0 );
		if ( n <= 0 ) break;
		buf[ n ] = '\0';
		printf( buf );
	}
	closesocket( sock );
	
	WSACleanup();
}
