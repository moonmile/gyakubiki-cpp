#include <stdio.h>

void main( void )
{
	unsigned int x, y;
	
	x = 0xFFFF0000;
	y = 0xFF00FF00;

	printf( "x:%08X, y:%08X\n", x, y );
	printf( "x | y = %08X\n", x | y );
}
