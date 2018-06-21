#include <stdio.h>
#include <stdarg.h>

void myprint( FILE *fp, const char *fmt, ... ) 
{
	va_list ap;
	va_start( ap, fmt );
	vfprintf( fp, fmt, ap );
	va_end(ap);
}


int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}

	/* 標準出力へ */
	myprint( fp, "文字列: [%s] [%s] [%s]\n", "Hello", "world,", "too" );
	myprint( fp, "文字:   %c %c %c %c %c\n", 'H','e','l','l','o' );
	myprint( fp, "数値:   %d %d %d\n", 100, 200, 300 );
	myprint( fp, "混在:   %s %c %d\n", "Hello", 'A', 100 );
	
	fclose(fp);
	return 1;
}
