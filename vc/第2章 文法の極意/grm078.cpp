#include <stdio.h>

void main( void )
{
	int ch;
	
	printf( "���͕���: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case 'A': 
	case 'B': 
	case 'C': 
		printf( "���� A,B,C\n" );
		break;
	default:
		printf( "����ȊO" );
		break;
	}
}
