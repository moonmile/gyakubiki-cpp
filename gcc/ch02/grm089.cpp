#include <stdio.h>
const int x = 0;		// 変更できない
int y = 0;				// 変更可能

int main( void )
{
//	x = 10;				// コンパイルエラー
	y = 20;
	printf( "main x:%d y:%d\n", x, y );
}
