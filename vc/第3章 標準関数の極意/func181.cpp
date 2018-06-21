#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ch;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' を書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("Hello world", fp );
	fclose( fp );
	
	fp = fopen("sample.dat","w");
	/* 書き込みモードでオープンされているファイルを
	 * 読み出そうとするとエラーになる
	 */
	ch = getc( fp );
	if ( ferror(fp) ) {
		printf("書き込みモードでオープンしているファイルから読み出そうとした\n");
		clearerr(fp);
	} else {
		printf("正常\n");
	}
	fclose(fp);

	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' を読み出しオープンできませんでした\n");
		return 0;
	}

	/* 終端に移動した後で、読み出そうとするとエラーになる */
	fseek( fp, 0, SEEK_END ); 
	ch = getc( fp );
	if ( ferror(fp) ) {
		printf("終端に移動した後で、読み出そうとするとエラー\n");
		clearerr(fp);
	} else {
		printf("正常\n");
	}
	fclose( fp );

	return 1;
}
