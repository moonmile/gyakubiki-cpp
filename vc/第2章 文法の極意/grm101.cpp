#include <stdio.h>

void func( int x, int *y )
{
	printf( "func %d %d\n", x, *y );
	x++; (*y)++;
	printf( "func %d %d\n", x, *y );
}

void main( void )
{
	int x = 10;
	int y = 20;

	printf( "main %d %d\n", x, y );
	func( x, &y );
	printf( "main %d %d\n", x, y );
}
