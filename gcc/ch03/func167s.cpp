#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[100];
	
	/* 書き込みモードで開く */
	puts("test write mode");
	if ( fopen_s( &fp, "sample.txt","w") != 0 ) {
		puts("ファイル 'sample.txt' が開けませんでした");
	} else {
		// １行書き込む
		fputs( "file open as write mode\n", fp );
		fclose( fp );
	}

	/* 読み込みモードで開く */
	puts("test read mode");
	if ( fopen_s( &fp, "sample.txt","r") != 0 ) {
		puts("ファイル 'sample.txt' が開けませんでした");
	} else {
		/* １行読み込む */
		fgets( buffer, sizeof buffer, fp );
		puts( buffer );
		fclose(fp);
	}
	
	/* 追加モードで開く*/
	puts("test append mode");
	if ( fopen_s( &fp, "sample.txt","a" ) != 0 ) {
		puts("ファイル 'sample.txt' が開けませんでした");
	} else {
		/* １行追加する */
		fputs( "file open as append mode\n", fp );
		fclose( fp );
	}
	
	return 1;
}

