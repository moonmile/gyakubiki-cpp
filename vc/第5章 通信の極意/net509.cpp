#include <stdio.h>
#ifndef _MSC_VER
#error "this function only use in MS-C"
#endif
#include <winsock.h>
void main( void )
{
	WSADATA wsadata;
	if ( WSAStartup( 0x0101, &wsadata ) != 0 ) {
		printf( "WSAStartup ÇÃé¿çsÇ…é∏îs %d\n", WSAGetLastError());
	} else {
		printf( "WSAStartup ÇÃé¿çsÇ…ê¨å˜\n" );
	}
	
	char host[32];
	gethostname( host, sizeof host );
	printf( "hostname: %s\n", host );
	
	WSACleanup();
}
