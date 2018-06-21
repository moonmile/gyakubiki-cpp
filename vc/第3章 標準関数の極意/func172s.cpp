#include <stdio.h>
#include <stdarg.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}
	char *argv1[] = { "Hello", "world,", "too" };
	
	/* ファイルへ出力 */
	vfprintf( fp, "文字列: [%1] [%2] [%3]\n", (va_list)argv1 );
	/* 無効なフォーマットの場合は例外が発生する */
	vfprintf_s( fp, "文字列: [%1] [%2] [%3]\n", (va_list)argv1 );
	
	fclose(fp);
	return 1;
}
