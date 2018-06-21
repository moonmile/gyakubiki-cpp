#include <stdio.h>

int main( void )
{
	int i;
	
	i = 0;
	for ( ;; ) {
		if ( i >= 10 ) break;
		printf( "[%d],", i );
		i++;
	}
	printf( "\n" );
	
	i = 0;
	while ( 1 ) {
		if ( i >= 10 ) break;
		printf( "[%d],", i );
		i++;
	}
	printf( "\n" );
}
