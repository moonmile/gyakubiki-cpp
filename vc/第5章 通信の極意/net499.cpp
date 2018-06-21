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
		printf( "WSAStartup �̎��s�Ɏ��s %d\n", WSAGetLastError());
		return ;
	}

	// TCP �̃\�P�b�g���쐬
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	printf( "TCP socket: %x\n", sock );
	closesocket( sock );

	// UDP �̃\�P�b�g���쐬
	sock = socket( AF_INET, SOCK_DGRAM, IPPROTO_UDP );
	printf( "UDP socket: %x\n", sock );
	closesocket( sock );

	WSACleanup();
}
