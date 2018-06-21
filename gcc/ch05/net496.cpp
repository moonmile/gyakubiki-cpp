#include <stdio.h>
#ifndef _MSC_VER
#error "this function only use in MS-C"
#endif
#include <winsock.h>
int main( void )
{
	WSADATA wsadata;
	
	// winsock 2.0 を要求するとき
	if ( WSAStartup( 0x0002, &wsadata ) != 0 ) {
		printf( "WSAStartup の実行に失敗 %d\n", WSAGetLastError());
	} else {
		printf( "WSAStartup の実行に成功 %x %x\n", 
			wsadata.wVersion, wsadata.wHighVersion );
		char host[32];
		gethostname( host, sizeof host );
		printf( "hostname: %s\n", host );
		
		WSACleanup();
	}
}
