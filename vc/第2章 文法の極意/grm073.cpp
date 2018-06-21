#include <stdio.h>

void main( void )
{
	int i;

	for ( i=0; i<10; i++ ) {
		// ‹ô”‚Ìê‡‚ÍˆÈ‰º‚Ìˆ—‚ð”ò‚Î‚·
		if ( i % 2 == 0 ) continue;
		printf( "[%d],", i );
	}
	printf( "\n" );
}
