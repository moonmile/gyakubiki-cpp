#include <stdio.h>
static int x;

void func( void ) 
{
	static int z = 0;
	z++;
	printf( "func z:%d\n", z );
}

int main( void )
{
	x = 1;
	printf( "main x:%d\n", x );
	func();
	func();
	func();
	printf( "main x:%d\n", x );
}
