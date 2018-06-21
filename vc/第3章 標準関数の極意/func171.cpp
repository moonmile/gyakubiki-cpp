#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' が書き込みオープンできませんでした\n");
		return 0;
	}
	
	int count = 1234;
	int ch = 'A';
	char buffer[] = "Hello world";
	
	/* 数値を出力 */
	fprintf( fp, "数値を出力             : [%d]\n", count );
	fprintf( fp, "数値を出力（右詰め）　 : [%6d]\n", count );
	fprintf( fp, "数値を出力（ゼロ詰め） : [%06d]\n", count );
	fprintf( fp, "数値を出力（左詰め）　 : [%-6d]\n", count );

	/* 文字を出力 */
	fprintf( fp, "文字を出力             : [%c]\n", ch );
	
	/* 文字列を出力 */
	fprintf( fp, "文字列を出力 　　　　　: [%s]\n", buffer );
	fprintf( fp, "文字列を出力（右詰め） : [%15s]\n", buffer );
	fprintf( fp, "文字列を出力（左詰め） : [%-15s]\n", buffer );
	fprintf( fp, "文字列を出力（制限）   : [%.5s]\n", buffer );

	/* 基数を変えて出力 */
	fprintf( fp, "１０進数               : [%d]\n", count );
	fprintf( fp, "８進数                 : [%o]\n", count );
	fprintf( fp, "１６進数（小文字）     : [%x]\n", count );
	fprintf( fp, "１６進数（大文字）     : [%X]\n", count );

	/* 実数の表示 */
	fprintf( fp, "実数(double)   : [%e]\n", 100.123 );
	fprintf( fp, "実数(double)   : [%E]\n", 100.123 );
	fprintf( fp, "実数(float)    : [%f]\n", 100.123 );
	fprintf( fp, "実数(短縮形)   : [%g]\n", 100.123 );
	fprintf( fp, "実数(精度)     : [%.5f]\n", 100.123 );
	fprintf( fp, "実数(精度)     : [%.0f]\n", 100.123 );
	
	/* ポインタ表示 */
	fprintf( fp, "ポインタ       : [%p]\n", &count );
	
	fclose( fp );
	return 1;
}
