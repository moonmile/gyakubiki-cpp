#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char ch1, ch2;
	
	printf( "２文字入力: " ); 
	scanf( "%c%c", &ch1, &ch2 );
	
	int r = ( isalpha( ch1 ) && isalpha( ch2 ) );
	if ( r ) {
		printf( "[%c][%c] は両方アルファベット\n", ch1, ch2 );
	} else {
		printf( "[%c][%c] はその他の文字\n", ch1, ch2 );
	}
}
