#include <stdio.h>
#include <stdarg.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}

	char *argv1[] = { "Hello", "world,", "too" };
	int   argv2[] = { 'H','e','l','l','o' };
	int   argv3[] = { 100, 200, 300 };
	int   argv4[] = { (int)"Hello", 'A', 100 };
	
	/* 標準出力へ */
	vfprintf( fp, "文字列: [%s] [%s] [%s]\n", (va_list)argv1 );
	vfprintf( fp, "文字:   %c %c %c %c %c\n", (va_list)argv2 );
	vfprintf( fp, "数値:   %d %d %d\n", (va_list)argv3 );
	vfprintf( fp, "混在:   %s %c %d\n", (va_list)argv4 );
	
	fclose(fp);
	return 1;
}
