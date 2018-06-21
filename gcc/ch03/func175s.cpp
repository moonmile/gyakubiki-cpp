#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[100];
	int n, count;
	char ch;
	double d;
	
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("Hello A 100 100.123\n", fp );
	fclose( fp );

	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		printf("'sample.txt' が読み出しオープンできませんでした\n");
		return 0;
	}

	/* 書式付きで読み出し */
	count = fscanf( fp, "%12 %c %d %lf\n", buffer, &ch, 1, &n, &d );
	printf("フィールド数 %d を読み込みました\n", count );
	
	fseek( fp, 0, SEEK_SET ); /* 先頭に戻す */
	/* 書式異常の場合 */
	count = fscanf_s( fp, "%12 %c %d %lf\n", buffer, 99, &ch, 1, &n, &d );
	printf("フィールド数 %d を読み込みました\n", count );

	fclose( fp );
	return 1;
}
