#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ch, i;

	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("Hello C world\n", fp );
	fputs("Hello C++ world\n", fp );
	fclose( fp );

	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		printf("'sample.txt' が読み出しオープンできませんでした\n");
		return 0;
	}

	char buffer[100];
	i = 0;
	/* fgets 関数の戻り値が NULL でファイルの終端をチェックする */
	while ( fgets( buffer, sizeof buffer, fp ) != NULL ) {
		printf("%d: %s", ++i, buffer );
	}
	fclose(fp);
}
