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
	addr.sin_addr.s_addr = inet_addr( "127.0.0.1" );
	addr.sin_port = htons(80);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );

	// 送受信用のバッファサイズを設定
	char size1, size2;
	int sz;
	
	size1 = size2 = 0;
	getsockopt( sock, SOL_SOCKET, SO_SNDBUF, &size1, &sz);
	getsockopt( sock, SOL_SOCKET, SO_RCVBUF, &size2, &sz);
	printf( "送受信バッファ %d %d\n", size1, size2 );
	
	size1 = size2 = 4000;
	setsockopt( sock, SOL_SOCKET, SO_SNDBUF, &size1, sizeof(size1));
	setsockopt( sock, SOL_SOCKET, SO_RCVBUF, &size2, sizeof(size2));
	
	size1 = size2 = 0;
	getsockopt( sock, SOL_SOCKET, SO_SNDBUF, &size1, &sz);
	getsockopt( sock, SOL_SOCKET, SO_RCVBUF, &size2, &sz);
	printf( "送受信バッファ %d %d\n", size1, size2 );
	
	ret = connect( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "localhost 80 に接続できなかった" );
		return 0;
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
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
