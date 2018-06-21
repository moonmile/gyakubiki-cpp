#include <stdio.h>

void func( void )
{
	// func 関数内の内部変数であり、
	// main 関数で定義されている変数とはスコープが異なる
	int x, y;
	x = 10; y = 20;
	printf( "func x:%d y:%d\n", x, y );
}

int main( void )
{
	int x, y;
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	func();
	printf( "main x:%d y:%d\n", x, y );
}
