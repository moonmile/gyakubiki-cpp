#include <stdio.h>

// プロトタイプ宣言
// C++ の場合はこの２つの関数は区別される
void func( int x );		
void func( char ch );

int main( void )
{
	int  x  = 10;
	char ch = 'A';
	
	func( x );
	func( ch );
}

void func( int x ) 
{
	printf( "func x:%d\n", x );
}
void func( char ch ) {
	printf( "func ch:%c\n", ch );
}
