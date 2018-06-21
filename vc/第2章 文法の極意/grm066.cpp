#include <stdio.h>

void main( void )
{
	int i;

	// ‚P‚Â‚¸‚Â‘‰Á
	for ( i=0; i<10; i++ ) {
		printf("%d,", i );
	}
	printf("\n");
	
	// ‚P‚Â‚¸‚ÂŒ¸­
	for ( i=10; i>0; i-- ) {
		printf( "%d,", i );
	}
	printf("\n");
	
	// ‚Q‚Â‚¸‚Â‘‰Á
	for ( i=0; i<10; i += 2 ) {
		printf( "%d,", i );
	}
	printf("\n");
}
