#include <stdio.h>

void main( void )
{
	int x, y;
	
	x = y = 10;
	printf( "x:%d y:%d\n", x, y );
	if ( x != y ) {
		printf( "x �� y �͓������Ȃ�\n" );
	} else {
		printf( "x �� y �͓�����\n" );
	}
	y = 20;
	printf( "x:%d y:%d\n", x, y );
	if ( x != y ) {
		printf( "x �� y �͓������Ȃ�\n" );
	} else {
		printf( "x �� y �͓�����\n" );
	}
}
