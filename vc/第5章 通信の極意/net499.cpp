#include <stdio.h>
#ifndef _MSC_VER
#error "this function only use in MS-C"
#endif
#include <winsock.h>

void main( void )
{
	int sock;
	
	WSADATA wsadata;
	
	if ( WSAStartup( 0x0101, &wsadata ) != 0 ) {
		printf( "WSAStartup の実行に失敗 %d\n", WSAGetLastError());
		return ;
	}

	// TCP のソケットを作成
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	printf( "TCP socket: %x\n", sock );
	closesocket( sock );

	// UDP のソケットを作成
	sock = socket( AF_INET, SOCK_DGRAM, IPPROTO_UDP );
	printf( "UDP socket: %x\n", sock );
	closesocket( sock );

	WSACleanup();
}
