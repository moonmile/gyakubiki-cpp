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
	int sock;
	struct sockaddr_in addr;
	int ret ;
	struct hostent *hostinfo;
	unsigned long 	inetaddress;
	const char *hostname = "localhost";

#ifdef _MSC_VER
	{
	WSADATA wsadata;
	WSAStartup( 0x0002, &wsadata );
	}
#endif
	inetaddress = inet_addr( hostname );
	if ( inetaddress == INADDR_NONE ) {
		hostinfo = gethostbyname( hostname );
		if ( hostinfo == 0 ) {
			// ホスト名解決に失敗
			return -1;
		}
		inetaddress = *(unsigned long *)hostinfo->h_addr_list[0];
	}
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inetaddress;
	addr.sin_port = htons(80);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	ret = connect( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "localhost 80 に接続できなかった\n" );
		return 0;
	}
	
	printf( "localhost 80 に接続できた\n" );
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
