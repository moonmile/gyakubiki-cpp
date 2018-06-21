#include <stdio.h>
#ifndef _MSC_VER
#error "this function only use in MS-C"
#endif
#include <winsock.h>
void main( void )
{
	WSADATA wsadata;
	if ( WSAStartup( 0x0101, &wsadata ) != 0 ) {
		printf( "WSAStartup ‚ÌŽÀs‚ÉŽ¸”s %d\n", WSAGetLastError());
	} else {
		printf( "WSAStartup ‚ÌŽÀs‚É¬Œ÷\n" );
	}
	
	char host[32];
	struct hostent *ent = gethostbyname( "www.shuwasystem.co.jp" );
	unsigned char *addr = (unsigned char*)ent->h_addr_list[0];
	printf("ip: %d.%d.%d.%d\n", 
		addr[0], addr[1], addr[2], addr[3] );
	WSACleanup();
}
