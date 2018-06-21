#include <stdio.h>
#include <ctype.h>

void main( void )
{
	int ch;
	
	printf( "文字入力: " );
	
	ch = fgetc( stdin );
	
	if ( isalpha( ch ) ) {
		printf( "[%c] はアルファベット\n", ch );
	} else if ( isdigit( ch ) ) {
		printf( "[%c] は数値\n", ch );
	} else {
		printf( "[%c] はその他の文字\n", ch );
	}
}
