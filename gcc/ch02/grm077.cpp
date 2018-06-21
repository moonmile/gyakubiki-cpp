#include <stdio.h>

int main( void )
{
	int ch;
	
	printf( "入力文字: " );
	ch = getc( stdin );
	
	switch ( ch ) {
	case 'A': 
		printf( "文字 A\n" );
		break;
	case 'B': 
		printf( "文字 B\n" );
		break;
	case 'C': 
		printf( "文字 C\n" );
		break;
	default:
		printf( "それ以外\n" );
		break;
	}
}
