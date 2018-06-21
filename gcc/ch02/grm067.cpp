#include <stdio.h>

int main( void )
{
	FILE *fp;
	int i, ch;
	
	if ( (fp=fopen("grm067.cpp","r")) == NULL ) {
		printf( "ファイルが開けない\n" );
		return 0;
	}
	
	// 10 文字になるまで出力
	for ( i=0; i < 10 && (ch=fgetc(fp)) != EOF; i++ ) {
		printf( "%d:[%c],", i, ch );
	}
	printf("\n");
	fclose( fp );
	return 1;
}
