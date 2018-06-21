#include <stdio.h>
int x, y;				// グローバル変数

void func( void ) {
	int x = 10;			// 内部変数
	y = 20;				// グローバル変数を変更
	printf( "func x:%d y:%d\n", x, y );
}

int main( void )
{
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	func();
	printf( "main x:%d y:%d\n", x, y );
}
