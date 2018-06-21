#include <stdio.h>

int main(void)
{
	FILE *fp;
	
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		puts("ファイル 'sample.txt' が開けませんでした");
		return 0;
	}
	/* １行書き込む */
	fputs( "writes one line.\n", fp );
	/* ファイルクローズ */
	puts("* test fclose");
	if ( fclose( fp ) == 0 ) {
		puts("ファイルストリームが正常に閉じられました");
	} else {
		puts("fclose 関数がエラーを返しました");
	}
	
	return 1;
}
