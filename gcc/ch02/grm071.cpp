#include <stdio.h>

int main( void )
{
	int i;
	
	i = 0;
	do {
		printf( "[%d],", i );
		i++;
	} while ( i < 10 );
	printf( "\n" );
}
