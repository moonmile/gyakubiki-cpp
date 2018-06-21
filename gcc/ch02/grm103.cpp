#include <stdio.h>
static int x;
int y;
void func2( void );

void func( void ) 
{
	static int z = 0;
	z++;
	printf( "func z:%d\n", z );
}

int main( void )
{
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	func();
	func();
	func();
	func2();
	printf( "main x:%d y:%d\n", x, y );
}
