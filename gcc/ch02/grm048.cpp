#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char ch1, ch2;
	
	printf( "２文字入力: " ); 
	scanf( "%c%c", &ch1, &ch2 );
	
	if ( isalpha( ch1 ) && isalpha( ch2 ) ) {
		printf( "[%c][%c] は両方アルファベット\n", ch1, ch2 );
	} else {
		printf( "[%c][%c] はその他の文字\n", ch1, ch2 );
	}
}
