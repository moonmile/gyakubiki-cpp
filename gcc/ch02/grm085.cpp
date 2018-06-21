#include <stdio.h>

int main( void )
{
	int x, y;
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	
	if ( x == 1 ) {
		// ブロック内での変数宣言
		int x = 10;
		printf( "if-block x:%d y:%d\n", x, y );
	}
	// ここで参照される変数 x は main 関数で宣言したもの
	printf( "main x:%d y:%d\n", x, y );
}
