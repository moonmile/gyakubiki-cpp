#include <stdio.h>

int main( void )
{
	int x, y;
	
	x = y = 10;
	printf( "x:%d y:%d\n", x, y );
	if ( x != y ) {
		printf( "x と y は等しくない\n" );
	} else {
		printf( "x と y は等しい\n" );
	}
	y = 20;
	printf( "x:%d y:%d\n", x, y );
	if ( x != y ) {
		printf( "x と y は等しくない\n" );
	} else {
		printf( "x と y は等しい\n" );
	}
}
