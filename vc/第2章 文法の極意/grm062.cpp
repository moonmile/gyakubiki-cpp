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

void main( void )
{
	char ch;
	printf( "‚P•¶š“ü—Í: " ); 
	scanf( "%c", &ch );
	
	if ( func( ch ) ) {
		printf( "func ‚ª^(true)\n" );
	} else {
		printf( "func ‚ª‹U(false)\n" );
	}
}
