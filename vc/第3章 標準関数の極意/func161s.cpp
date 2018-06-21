#include <stdio.h>
#include <stdarg.h>

void main( void )
{
	char *argv1[] = { "Hello", "world,", "too" };
	
	/* 標準出力へ */
	vprintf( "文字列: [%1] [%2] [%3]\n", (va_list)argv1 );
	/* 無効なフォーマットの場合は例外が発生する */
	vprintf_s( "文字列: [%1] [%2] [%3]\n", (va_list)argv1 );
}
