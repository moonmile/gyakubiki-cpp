#include <stdio.h>

void main( void )
{
	int i;

	for ( i=0; i<10; i++ ) {
		// ‚T‚Ì‚Æ‚«‚Éƒ‹[ƒv‚ð‚â‚ß‚é
		if ( i == 5 ) break;
		printf( "[%d],", i );
	}
	printf( "\n" );
}
