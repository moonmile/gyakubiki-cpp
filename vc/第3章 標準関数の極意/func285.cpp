#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sigint( int n )
{
	puts( "pushed Ctrl+C !" );
	exit(0);
}

void main( void )
{
	char buf[256];

	signal( SIGINT, sigint );
	
	puts( "please push Ctrl+C" );
	while ( 1 ) {
		gets_s( buf, 256 );

		// 先頭が 'e' の場合は Ctrl+C と同じ扱いにする		
		if ( buf[0] == 'e' ) {
			raise( SIGINT );
		}
	}
}
