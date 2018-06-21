#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char ch;
	
	printf( "１文字入力: " ); 
	scanf( "%c", &ch );
	
	if ( !isalpha( ch ) ) {
		printf( "[%c] はアルファベットではない", ch );
	} else {
		printf( "[%c] はアルファベット\n", ch );
	}
}
