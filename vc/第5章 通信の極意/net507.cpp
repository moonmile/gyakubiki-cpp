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

int main( void )
{
	int sock;
	struct sockaddr_in addr;
	int ret ;
	struct hostent *hostinfo;
	unsigned long 	inetaddress;
	char *hostname = "localhost";

#ifdef _MSC_VER
	{
	WSADATA wsadata;
	WSAStartup( 0x0101, &wsadata );
	}
#endif
	addr.sin_family      = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port        = htons(8080);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	// 既にポートが開いている場合でも bind できる
	char opt = 1;
	ret = setsockopt( sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

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
	printf( "listen で成功\n" );

#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
