#include <stdio.h>
#include <errno.h>

int main( void )
{
	FILE *fp;
	
	if ((fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' が書き込みオープンできませんでした\n");
		return 0;
	}
	fputs("sample data\n", fp );
	fclose( fp );
	
	/* ファイル名を変更 */
	if ( rename("sample.dat","sample2.dat") == 0 ) {
		printf("'sample2.dat' にファイル名を変更しました\n");
	} else {
		printf("'sample.dat' のファイル名の変更に失敗しました [%d]\n", errno );
	}
	
	/* ファイルを削除 */
	remove("sample2.dat");
	/* 存在しないファイル名を変更 */
	if ( rename("sample2.dat","sample3.dat") == 0 ) {
		printf("'sample3.dat' にファイル名を変更しました\n");
	} else {
		printf("'sample2.dat' のファイル名の変更に失敗しました [%d]\n", errno );
	}
	
	return 1;
}
