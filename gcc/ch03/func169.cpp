#include <stdio.h>

int main( void )
{
	char *p;
	char buffer[] = "Hello world\n";
	int  ch;
	FILE *fp;
	
	if ( (fp = fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' がオープンできませんでした\n");
		return 0;
	}
	
	for ( p = buffer; *p != '\0'; p++ ) {
		ch = fputc( *p, fp );
		if ( ch == EOF ) {
			printf("fputc 関数でエラーが発生しました");
			break;
		}
	}

	fclose( fp );
	return 1;
}
