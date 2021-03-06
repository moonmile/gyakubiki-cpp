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
	int sock, ret;
	struct sockaddr_in addr;

#ifdef _MSC_VER
	{
	WSADATA wsadata;
	WSAStartup( 0x0101, &wsadata );
	}
#endif

	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(80);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	ret = connect( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "can't open http port\n" );
		return 0;
	}
	
	char body[] = "POST DATA\r\n";
	char head[] = "POST /post.cgi HTTP/1.0\r\n";
	char length[100];
	sprintf( length, "Content-Length: %d\r\n", strlen(body) );
	
	int n = 0;
	n += send( sock, head, strlen(head), 0 );
	n += send( sock, length, strlen(length), 0 );
	n += send( sock, "\r\n", 2, 0 );
	n += send( sock, body, strlen(body), 0 );
	printf( "send: %d\n", n );
	
	char buf[256];
	printf( "http recv data\n" );
	printf( "=============================\n" );
	while ( 1 ) {
		n = recv( sock, buf, sizeof(buf)-1, 0 );
		if ( n <= 0 ) break;
		buf[ n ] = '\0';
		printf( buf );
	}
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
}
