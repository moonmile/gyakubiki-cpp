#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	FILE *fp;
	int *p = NULL;
	char buffer[100];
	
	if ( (fp = tmpfile()) == NULL ) {
		printf("テンポラリファイルが作成できませんでした");
		return 0;
	}
	fputs( "テンポラリファイルに書き込み", fp );
	rewind(fp);
	fgets( buffer, sizeof buffer, fp );
	printf("[%s]\n", buffer );

	abort();	/* 異常終了させる */
	return 1;
}
