#include <stdio.h>

int main( void )
{
	int x = 1, y;
	// １ビット左シフト
	y = x << 1; 			
	printf( "x:%d, y:%d\n", x, y );
}
