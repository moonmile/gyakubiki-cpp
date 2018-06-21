#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int i, ch;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' を書き込みオープンできませんでした\n");
		return 0;
	}
	for ( i=0; i<26; i++ ) fputc('a'+i,fp);
	fclose(fp);
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' を読み出しオープンできませんでした\n");
		return 0;
	}

	/* ５文字読み出す */
	for ( i=0; i<5; i++ ) {
		ch = getc( fp );
		printf("%d 文字目: [%c]\n", i+1, ch );
	}
	/* 先頭に移動して、再び５文字読み出す */
	rewind( fp );
	for ( i=0; i<5; i++ ) {
		ch = getc( fp );
		printf("%d 文字目: [%c]\n", i+1, ch );
	}

	fclose(fp);
	return 1;
}
