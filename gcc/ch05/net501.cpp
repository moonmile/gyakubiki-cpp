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
#include <time.h>
#include <string.h>

int main( void )
{
	int sock;
	struct sockaddr_in addr;
	int ret ;
	struct hostent *hostinfo;
	unsigned long 	inetaddress;
	char *hostname = "localhost";

#ifdef _MSC_VER
	{
	WSADATA wsadata;
	WSAStartup( 0x0101, &wsadata );
	}
#endif
	addr.sin_family      = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port        = htons(8080);
	
	sock = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	ret = bind( sock, (struct sockaddr *)&addr, sizeof addr );
	if ( ret < 0 ) {
		printf( "bind で失敗\n" );
		return 0;
	}
	ret = listen( sock, SOMAXCONN );
	if ( ret < 0 ) {
		printf( "listen で失敗\n" );
		return 0;
	}

	int sockc[10];
	int i, max_fd;
	for ( i=0; i<10; i++ ) sockc[i] = -1;
	max_fd = sock;
	while ( 1 ) {
		fd_set rmask;
		
		FD_ZERO( &rmask );
		FD_SET( sock, &rmask );
		for ( i=0; i<10; i++ ) {
			if ( sockc[i] != -1 ) {
				FD_SET( sockc[i], &rmask );
			}
		}
		
		struct timeval timeout;
		timeout.tv_sec = 60;
		timeout.tv_usec = 0;
		printf( "select ...\n" );
		ret = select( max_fd+1, &rmask, NULL, NULL, &timeout );
		printf( "select get %d\n", ret );
		if ( ret == -1 ) {
			printf( "select error\n" );
			break;
		} else if ( ret == 0 ) {
			printf( "select timeout\n" );
			break;
		}
		
		if ( FD_ISSET( sock, &rmask ) ) {
			// listen ソケットの場合 
			for ( i=0; i<10; i++ ) {
				if ( sockc[i] == -1 ) break;
			}
			if ( i < 10 ) {
				struct sockaddr_in addrc;
				int sockc_len;
				
				sockc_len = sizeof( addrc );
				sockc[i] = accept( 
				  sock, (struct sockaddr *)&addrc, (socklen_t*)&sockc_len );
				max_fd = sockc[i];
				if ( sockc[i] < 0 ) {
					printf( "accept で失敗\n" );
					continue;
				}
				
				char buf[256];
				int n;
				n = recv( sockc[i], buf, sizeof(buf)-1, 0 );
				if ( n <= 0 ) continue;
				buf[n] = '\0';
				printf( "recv data\n%s\n", buf );
				
				struct tm *t;
				time_t tt;
				char bufout[256];
			
				time( &tt );
				t = localtime( &tt );
				sprintf( bufout, 
				  "HTTP/1.1 200 OK\r\n\r\nserver time: %s", asctime( t ));
				send( sockc[i], bufout, strlen( bufout ), 0 );
			}
		} else {
			// その他のソケットの場合
			for ( i=0; i<10; i++ ) {
				if ( sockc[i] != -1 ) {
					char buf[256];
					int n;
					n = recv( sockc[i], buf, sizeof(buf)-1, 0 );
					if ( n <= 0 ) goto end;
					buf[n] = '\0';
					printf( "recv data\n%s\n", buf );

					char bufout[] = "server recve data: ";
					send( sockc[i], bufout, strlen(bufout), 0 );
					send( sockc[i], buf, strlen(buf), 0 );
				}
			}
		}
	}
end:
	for ( i=0; i<10; i++ ) {
		if ( sockc[i] != -1 ) {
#ifdef _MSC_VER
			closesocket( sockc[i] );
#else
			close( sockc[i] );
#endif
		}
	}
#ifdef _MSC_VER
	closesocket( sock );
#else
	close( sock );
#endif
	return 1;
}
