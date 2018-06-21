#include <stdio.h>

void main( void )
{
	int ch;
	
	printf( "“ü—Í•¶Žš: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case 'A': 
		printf( "•¶Žš A\n" );
		break;
	case 'B': 
		printf( "•¶Žš B\n" );
		break;
	case 'C': 
		printf( "•¶Žš C\n" );
		break;
	default:
		printf( "‚»‚êˆÈŠO" );
		break;
	}
}
