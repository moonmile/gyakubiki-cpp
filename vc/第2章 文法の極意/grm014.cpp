#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	// 符号付きint型
	int x1 = 10;
	int x2 = INT_MAX ;
	int x3 = INT_MIN ;
	
	printf( "sizeof int: %d\n", sizeof(int));
	printf( "x1: %d\n", x1 );
	printf( "x2 max: %d %x\n", x2, x2 );
	printf( "x3 min: %d %x\n", x3, x3 );
	
	// 符号付きint型を明示的に指定する
	signed int y1 = 10;
	signed int y2 = INT_MAX ;
	signed int y3 = INT_MIN ;
	
	printf( "y1: %d\n", y1 );
	printf( "y2 max: %d %x\n", y2, y2 );
	printf( "y3 min: %d %x\n", y3, y3 );
}
