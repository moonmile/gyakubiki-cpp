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
		{
			int x = ch - 'A';
			printf( "���� A,B,C [%d]\n", x );
		}
		break;
	default:
		printf( "����ȊO" );
		break;
	}
}
