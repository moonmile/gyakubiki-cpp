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

int main( void )
{
	char ch;
	printf( "１文字入力: " ); 
	scanf( "%c", &ch );
	
	if ( func1( ch ) && func2( ch ) ) {
		printf( "&&演算子: true\n" );
	} else {
		printf( "&&演算子: false\n" );
	}
	
	if ( func1( ch ) || func2( ch ) ) {
		printf( "||演算子: true\n" );
	} else {
		printf( "||演算子: false\n" );
	}
}
