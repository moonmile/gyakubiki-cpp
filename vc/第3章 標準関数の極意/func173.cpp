#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ch, i;

	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("Hello world\n", fp );
	fclose( fp );

	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		printf("'sample.txt' が読み出しオープンできませんでした\n");
		return 0;
	}
	
	/* fgetc 関数の戻り値が EOF でファイルの終端をチェックする */
	i = 0;
	while ( (ch = fgetc( fp )) != EOF ) {
		printf("%d: %c %02X\n", ++i, ch, ch );
	}
	fclose(fp);
	return 1;
}
