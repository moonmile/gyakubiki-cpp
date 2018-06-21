#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void sigint( int n )
{
	puts( "pushed Ctrl+C !" );
	exit(0);
}

int main( void )
{
	char buf[256];

	signal( SIGINT, sigint );
	
	puts( "please push Ctrl+C" );
	while ( 1 ) {
		fgets( buf, sizeof buf, stdin );
	}
}
