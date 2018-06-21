#include <stdio.h>

void main( void )
{
	// •¶š—ñ
	char str[] = "Hello";
	printf( "str: %s\n", str );
	// ”’l
	int ary[5] = {0,1,2,3,4};
	for ( int i=0; i<5; i++ ) {
		printf( "[%d]", ary[i] );
	}
	printf("\n");
	for ( int *p = ary, i=0; i<5; p++, i++ ) {
		printf( "[%d]", *p );
	}
	printf("\n");
}
