#include <stdio.h>

void main( void )
{
	int ch;
	
	printf( "“ü—Í•¶Žš: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case '1': 
	case '2': 
	case '3': 
		printf( "•¶Žš [%c]\n", ch );
		break;
	default:
		printf( "‚»‚êˆÈŠO" );
		break;
	}
}
