#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}

	char buffer[] = "Hello world";
	/* 無効なフォーマットを指定 */
	fprintf( fp, "文字列を出力 　　　　　: [%12]\n", buffer );
	/* セキュリティ版では例外が発生する */	
	fprintf_s( fp, "文字列を出力 　　　　　: [%12]\n", buffer );
	
	fclose(fp);
	return 1;
}
