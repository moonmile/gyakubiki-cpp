#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ret;
	if ( (fp=fopen("sample.txt","w")) != NULL ) {
		fputs("Hello world\n", fp );
		fclose( fp );
	}
	
	ret = fputs( "Hello world\n", stdout );
	printf( "fputs の戻り値: %d\n", ret );
	
	if ( (fp=fopen("sample.txt","r")) != NULL ) {
		/* 読み込みモードでオープンしているためエラーが発生する */
		ret = fputs( "Hello world", fp );
		if ( ret != EOF ) {
			printf( "正常終了: %d\n", ret );
		} else {
			printf( "fputs 関数で異常が発生しました\n" );
		}
		fclose( fp );
	}
	return 1;
}
