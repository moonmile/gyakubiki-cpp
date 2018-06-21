#include <stdio.h>

void main( void )
{
	int ch;
	
	printf( "“ü—Í•¶Žš: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case 'A': 
	case 'B': 
	case 'C': 
		printf( "•¶Žš A,B,C\n" );
		break;
	default:
		printf( "‚»‚êˆÈŠO" );
		break;
	}
}
