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
#ifdef _MSC_VER
	WSADATA wsadata;
	if ( WSAStartup( 0x0101, &wsadata ) != 0 ) {
		printf( "WSAStartup の実行に失敗 %d\n", WSAGetLastError());
	} else {
		printf( "WSAStartup の実行に成功\n" );
	}
#endif
	char host[32];
	gethostname( host, sizeof host );
	printf( "hostname: %s\n", host );
#ifdef _MSC_VER
	WSACleanup();
#endif
}
