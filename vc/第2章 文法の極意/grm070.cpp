#include <stdio.h>

void main( void )
{
	int i;
	
	i = 0;
	while ( i < 10 ) {
		printf( "[%d],", i );
		i++;
	}
	printf( "\n" );
}
