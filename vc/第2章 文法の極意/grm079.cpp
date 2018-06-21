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
		{
			int x = ch - 'A';
			printf( "•¶Žš A,B,C [%d]\n", x );
		}
		break;
	default:
		printf( "‚»‚êˆÈŠO" );
		break;
	}
}
