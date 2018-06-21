#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	// •„†•t‚«intŒ^
	int x1 = 10;
	int x2 = INT_MAX ;
	int x3 = INT_MIN ;
	
	printf( "sizeof int: %d\n", sizeof(int));
	printf( "x1: %d\n", x1 );
	printf( "x2 max: %d %x\n", x2, x2 );
	printf( "x3 min: %d %x\n", x3, x3 );
	
	// •„†–³‚µintŒ^
	unsigned int y1 = 10;
	unsigned int y2 = UINT_MAX ;
	unsigned int y3 = 0; // UINT_MIN ;
	
	printf( "y1: %u\n", y1 );
	printf( "y2 max: %u %x\n", y2, y2 );
	printf( "y3 min: %u %x\n", y3, y3 );
}
