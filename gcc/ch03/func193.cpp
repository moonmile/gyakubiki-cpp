#include <stdio.h>
#include <errno.h>

int main( void )
{
	FILE *fp;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' が書き込みオープンできません\n");
		return 0;
	}
	fputs("this is sample data\n", fp );
	fclose( fp );
	
	/* ファイルを削除する */
	if ( remove("sample.dat") == 0 ) {
		printf("'sample.dat' を削除しました\n");
	} else {
		printf("'sample.dat' を削除時にエラーが発生しました [%d]\n", errno );
	}
	
	/* 存在しないファイルを削除する */
	if ( remove("sample2.dat") == 0 ) {
		printf("'sample2.dat' を削除しました\n");
	} else {
		printf("'sample2.dat' を削除時にエラーが発生しました [%d]\n", errno );
	}
	return 1;
}
