#include <stdio.h>
#include <ctype.h>

int func( char ch )
{
	if ( isalpha( ch ) || isdigit( ch ) ) {
		return 1;
	} else {
		return 0;
	}
}

int main( void )
{
	char ch;
	printf( "１文字入力: " ); 
	scanf( "%c", &ch );
	
	if ( func( ch ) ) {
		printf( "func が真(true)\n" );
	} else {
		printf( "func が偽(false)\n" );
	}
}
