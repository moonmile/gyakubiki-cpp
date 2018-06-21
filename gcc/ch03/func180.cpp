#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[4];
	int count;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' を書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("Hello world", fp );
	fclose(fp);
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' を読み出しオープンできませんでした\n");
		return 0;
	}
	/* 4 バイトずつ読み出す */
	while ( !feof(fp) ) {
		count = fread( buffer, 1, sizeof buffer, fp );
		if ( ferror(fp) ) {
			printf("読み出し中にエラーが発生しました");
			break;
		}
		printf("読み出し[%d]: ", count );
		fwrite( buffer, 1, count, stdout );
		putchar('\n');
	}
	fclose(fp);
	
	return 1;
}
