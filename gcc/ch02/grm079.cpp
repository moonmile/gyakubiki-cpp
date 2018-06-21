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
		{
			int x = ch - 'A';
			printf( "文字 A,B,C [%d]\n", x );
		}
		break;
	default:
		printf( "それ以外\n" );
		break;
	}
}
