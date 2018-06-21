#include <stdio.h>

int main( void )
{
	int n = 1;
	
	if ( n == 0 ) {
		printf( "n is zero.\n" );
	} else {
		printf( "n iz not zero.\n" );
	}
	
	printf("n is %s.\n",
		( n == 0 )? "zero": "not zero" );
}
