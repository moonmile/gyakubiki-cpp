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
	printf( "�P��������: " ); 
	scanf( "%c", &ch );
	
	if ( func( ch ) ) {
		printf( "func ���^(true)\n" );
	} else {
		printf( "func ���U(false)\n" );
	}
}
