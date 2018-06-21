#include <stdio.h>

int main( void )
{
	char str[] = "Hello world";
	char buff[100];
	
	/* 無効なフォーマットを指定 */
	sprintf( buff, "文字列を出力 　　　　: [%12]\n", str );
	printf( buff );
	/* セキュリティ版では例外が発生する */	
	sprintf_s( buff, "文字列を出力 　　　　: [%12]\n", str );
	printf( buff );
}
