#include <stdio.h>

int main( void )
{
	int x = 64, y;
	// １ビット右シフト
	y = x >> 1; 			
	printf( "x:%d, y:%d\n", x, y );
}
