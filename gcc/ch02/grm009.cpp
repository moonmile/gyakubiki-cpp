#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main( void )
{
	// 符号付きshort型
	short x1 = 10;
	short x2 = SHRT_MAX ;
	short x3 = SHRT_MIN ;
	
	printf( "sizeof short: %d\n", sizeof(short));
	printf( "x1: %d\n", x1 );
	printf( "x2 max: %d %x\n", x2, x2 );
	printf( "x3 min: %d %x\n", x3, x3 );
	
	// 符号無しshort型
	unsigned short y1 = 10;
	unsigned short y2 = USHRT_MAX ;
	unsigned short y3 = 0; // USHRT_MIN ;
	
	printf( "y1: %u\n", y1 );
	printf( "y2 max: %u %x\n", y2, y2 );
	printf( "y3 min: %u %x\n", y3, y3 );
}
