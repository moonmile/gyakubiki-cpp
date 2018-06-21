#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int i, ch;
	
	if ( (fp=fopen("sample.txt","wb")) == NULL ) {
		printf("'sample.dat' を書き込みオープンできませんでした\n");
		return 0;
	}
	for ( i=0; i<26; i++ ) fputc('a'+i,fp);
	fclose(fp);
	
	if ( (fp=fopen("sample.txt","rb")) == NULL ) {
		printf("'sample.dat' を読み出しオープンできませんでした\n");
		return 0;
	}
	
	/* 10 バイト目から 5 文字表示する */
	if ( fseek( fp, 10, SEEK_SET ) != 0 ) {
		printf("ファイルポインタの移動に失敗しました\n");
	}
	printf("先頭から 10 バイト目: ");
	for ( i=0; i<5; i++ ) putchar(fgetc( fp ));
	putchar('\n');
	
	/* 5 バイト先頭方向に戻す */
	if ( fseek( fp, -3, SEEK_CUR ) != 0 ) {
		printf("ファイルポインタの移動に失敗しました\n");
	}
	printf("先頭方向に 3 バイト戻す: ");
	for ( i=0; i<5; i++ ) putchar(fgetc( fp ));
	putchar('\n');

	/* ファイルの終端から 5 バイト表示する */
	if ( fseek( fp, -5, SEEK_END ) != 0 ) {
		printf("ファイルポインタの移動に失敗しました\n");
	}
	printf("ファイルの終端から 5 バイト: ");
	for ( i=0; i<5; i++ ) putchar(fgetc(fp));
	putchar('\n');
	
	fclose(fp);
	return 1;
}
