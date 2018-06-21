#include <stdio.h>

int main( void )
{
	int i;

	for ( i=0; i<10; i++ ) {
		// ５のときにループをやめる
		if ( i == 5 ) break;
		printf( "[%d],", i );
	}
	printf( "\n" );
}
