#include <stdio.h>
#ifdef _MSC_VER
#include <winsock2.h>
#else
#include <sys/unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#endif

int main( void )
{
	int sock;
	
#ifdef _MSC_VER
	{
	WSADATA wsadata;
	WSAStartup( 0x0002, &wsadata );
	}
#endif
	// TCP のソケットを作成
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	printf( "TCP socket: %x\n", sock );
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;

	// UDP のソケットを作成
	sock = socket( AF_INET, SOCK_DGRAM, IPPROTO_UDP );
	printf( "UDP socket: %x\n", sock );
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
