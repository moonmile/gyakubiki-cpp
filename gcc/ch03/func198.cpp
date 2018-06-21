#include <stdio.h>
#ifdef _MSC_VER
#define fileno _fileno
#endif

int main( void )
{
	FILE *fp;
	if ((fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' が書き込みオープンできませんでした\n");
		return 0;
	}
	
	printf("fp のファイルハンドル:     %d\n", fileno(fp));
	printf("stdin のファイルハンドル:  %d\n", fileno(stdin));
	printf("stdout のファイルハンドル: %d\n", fileno(stdout));
	fclose( fp );
	return 1;
}
