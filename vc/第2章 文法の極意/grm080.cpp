#include <stdio.h>

void main( void )
{
	int ch;
	
	printf( "���͕���: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case '1': 
	case '2': 
	case '3': 
		printf( "���� [%c]\n", ch );
		break;
	default:
		printf( "����ȊO" );
		break;
	}
}
