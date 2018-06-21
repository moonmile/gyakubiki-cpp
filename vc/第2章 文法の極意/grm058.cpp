#include <stdio.h>

int x = 10;
void main( void )
{
	int x = 20;
	
	printf( "local x = %d\n", x );
	printf( "global x = %d\n", ::x );
}
