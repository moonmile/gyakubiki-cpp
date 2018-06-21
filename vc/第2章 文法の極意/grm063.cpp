#include <stdio.h>
#include <ctype.h>

int func1( char ch )
{
	printf( "in func1\n" );
	if ( isalpha( ch ) ) return 1;
	return 0;
}
int func2( char ch ) 
{
	printf( "in func2\n" );
	if ( isdigit( ch ) ) return 1;
	return 0;
}

void main( void )
{
	char ch;
	printf( "�P��������: " ); 
	scanf( "%c", &ch );
	
	if ( func1( ch ) && func2( ch ) ) {
		printf( "&&���Z�q: true\n" );
	} else {
		printf( "&&���Z�q: false\n" );
	}
	
	if ( func1( ch ) || func2( ch ) ) {
		printf( "||���Z�q: true\n" );
	} else {
		printf( "||���Z�q: false\n" );
	}
}
