#include <stdio.h>
#ifndef _MSC_VER
#error "this function only use in MS-C"
#endif
#include <winsock.h>
int main( void )
{
	WSADATA wsadata;
	if ( WSAStartup( 0x0002, &wsadata ) != 0 ) {
		printf( "WSAStartup の実行に失敗 %d\n", WSAGetLastError());
	} else {
		printf( "WSAStartup の実行に成功\n" );
	}
	
	char host[32];
	gethostname( host, sizeof host );
	printf( "hostname: %s\n", host );
	
	WSACleanup();
}
