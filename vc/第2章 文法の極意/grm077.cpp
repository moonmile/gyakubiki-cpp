#include <stdio.h>

void main( void )
{
	int ch;
	
	printf( "���͕���: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case 'A': 
		printf( "���� A\n" );
		break;
	case 'B': 
		printf( "���� B\n" );
		break;
	case 'C': 
		printf( "���� C\n" );
		break;
	default:
		printf( "����ȊO" );
		break;
	}
}
