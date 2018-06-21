#include <stdio.h>
#include <sys/unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include <string.h>

int main( void )
{
	int sock;
	struct sockaddr_in addr;
	int ret ;
	struct hostent *hostinfo;
	unsigned long 	inetaddress;
	const char *hostname = "localhost";

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
	
	char get[] = "GET /index.html HTTP/1.0\r\n\r\n";
	send( sock, get, strlen(get), 0 );
	
	char buf[256];
	int n;
	printf( "recv data\n" );
	while ( 1 ) {
		n = recv( sock, buf, sizeof(buf)-1, 0 );
		if ( n <= 0 ) break;
		buf[ n ] = '\0';
		printf( buf );
	}
	close( sock );
}
