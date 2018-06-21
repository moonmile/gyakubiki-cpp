#include <stdio.h>

void main( void )
{
	int i, j;
	
	for ( i=1; i<10; i++ ) {
		for ( j=1; j<10; j++ ) {
			// 20 ˆÈã‚ÌŽž goto •¶‚Åƒ‹[ƒv‚ð”²‚¯‚é
			if ( i*j > 20 ) goto loopend;
			printf( "[%d],", i*j );
		}
	}
loopend:
	printf( "\n" );
}
