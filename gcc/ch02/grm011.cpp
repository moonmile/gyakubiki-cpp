#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main( void )
{
	// 符号付きchar型
	char x1 = 'C';
	char x2 = CHAR_MAX ;
	char x3 = CHAR_MIN ;
	
	printf( "sizeof char: %d\n", sizeof(char));
	printf( "x1: %c\n", x1 );
	printf( "x2 max: %d %x\n", x2, x2 );
	printf( "x3 min: %d %x\n", x3, x3 );
	
	// 符号無しchar型
	unsigned char y1 = 'C';
	unsigned char y2 = UCHAR_MAX ;
	unsigned char y3 = 0; // UCHAR_MIN ;
	
	printf( "y1: %c\n", y1 );
	printf( "y2 max: %u %x\n", y2, y2 );
	printf( "y3 min: %u %x\n", y3, y3 );
}
