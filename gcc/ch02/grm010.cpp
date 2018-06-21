#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main( void )
{
	// 符号付きlong型
	long x1 = 10;
	long x2 = LONG_MAX ;
	long x3 = LONG_MIN ;
	
	printf( "sizeof long: %d\n", sizeof(long));
	printf( "x1: %d\n", x1 );
	printf( "x2 max: %d %x\n", x2, x2 );
	printf( "x3 min: %d %x\n", x3, x3 );
	
	// 符号無しlong型
	unsigned long y1 = 10;
	unsigned long y2 = ULONG_MAX ;
	unsigned long y3 = 0; // ULONG_MIN ;
	
	printf( "y1: %u\n", y1 );
	printf( "y2 max: %u %x\n", y2, y2 );
	printf( "y3 min: %u %x\n", y3, y3 );
}
