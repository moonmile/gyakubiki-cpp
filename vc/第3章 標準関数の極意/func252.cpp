#include <stdio.h>
#include <string.h>

void main( void )
{
	int i;
	char *p;
	char str[] = "Hello C world.";
	struct point {
		int x,y,z;
	};
	struct point pt, *ppt;
	
	printf( "sizeof int: %d\n", sizeof( int ));
	printf( "sizeof i:   %d\n", sizeof( i ));
	
	printf( "sizeof double: %d\n", sizeof( double ));
	
	printf( "sizeof char *: %d\n", sizeof( char * ));
	printf( "sizeof p:      %d\n", sizeof( p ));
	printf( "sizeof str:    %d\n", sizeof( str ));

	printf( "sizeof struct point: %d\n", sizeof( struct point ));
	printf( "sizeof pt:           %d\n", sizeof( pt ));
	printf( "sizeof ppt:          %d\n", sizeof( ppt ));
}

