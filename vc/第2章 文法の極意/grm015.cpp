#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	// 符号無しint型
	unsigned int x1 = 10;
	unsigned int x2 = UINT_MAX ;
	unsigned int x3 = 0 ; // UINT_MIN ;
	
	printf( "sizeof unsigned int: %d\n", sizeof(unsigned int));
	printf( "x1: %u\n", x1 );
	printf( "x2 max: %u %x\n", x2, x2 );
	printf( "x3 min: %u %x\n", x3, x3 );

	// unsigned int でマイナス値を代入する
	unsigned int y1 = -10;
	printf( "y1: %u\n", y1 );
}
