#include <stdio.h>

int main( void )
{
	int ch;
	
	printf( "入力文字: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case '1': 
	case '2': 
	case '3': 
		printf( "文字 [%c]\n", ch );
		break;
	default:
		printf( "それ以外\n" );
		break;
	}
}
