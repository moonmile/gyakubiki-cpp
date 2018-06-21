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
	count = fscanf( fp, "%s %c %d %lf\n", buffer, &ch, &n, &d );
	printf("フィールド数 %d を読み込みました\n", count );
	printf("文字列: [%s]\n", buffer );
	printf("文字:   [%c]\n", ch );
	printf("数値:   [%d]\n", n );
	printf("実数:   [%f]\n", d );
	
	fseek( fp, 0, SEEK_SET ); /* 先頭に戻す */
	fscanf( fp, "%3s", buffer );
	printf("最初の３文字: [%s]\n", buffer );
	
	fclose( fp );
	return 1;
}
