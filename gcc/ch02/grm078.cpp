#include <stdio.h>

int main( void )
{
	int ch;
	
	printf( "入力文字: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case 'A': 
	case 'B': 
	case 'C': 
		printf( "文字 A,B,C\n" );
		break;
	default:
		printf( "それ以外\n" );
		break;
	}
}
