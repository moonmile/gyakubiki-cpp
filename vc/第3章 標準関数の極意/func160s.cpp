#include <stdio.h>

int main( void )
{
	char buffer[] = "Hello world";
	
	/* 無効なフォーマットを指定 */
	printf( "文字列を出力 　　　　　: [%12]\n", buffer );
	/* セキュリティ版では例外が発生する */	
	printf_s( "文字列を出力 　　　　　: [%12]\n", buffer );
}
