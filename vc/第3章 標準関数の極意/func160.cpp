#include <stdio.h>

int main( void )
{
	int count = 1234;
	int ch = 'A';
	char buffer[] = "Hello world";
	
	/* 数値を出力 */
	printf( "数値を出力             : [%d]\n", count );
	printf( "数値を出力（右詰め）　 : [%6d]\n", count );
	printf( "数値を出力（ゼロ詰め） : [%06d]\n", count );
	printf( "数値を出力（左詰め）　 : [%-6d]\n", count );

	/* 文字を出力 */
	printf( "文字を出力             : [%c]\n", ch );
	
	/* 文字列を出力 */
	printf( "文字列を出力 　　　　　: [%s]\n", buffer );
	printf( "文字列を出力（右詰め） : [%15s]\n", buffer );
	printf( "文字列を出力（左詰め） : [%-15s]\n", buffer );
	printf( "文字列を出力（制限）   : [%.5s]\n", buffer );

	/* 基数を変えて出力 */
	printf( "１０進数               : [%d]\n", count );
	printf( "８進数                 : [%o]\n", count );
	printf( "１６進数（小文字）     : [%x]\n", count );
	printf( "１６進数（大文字）     : [%X]\n", count );

	/* 実数の表示 */
	printf( "実数(double)   : [%e]\n", 100.123 );
	printf( "実数(double)   : [%E]\n", 100.123 );
	printf( "実数(float)    : [%f]\n", 100.123 );
	printf( "実数(短縮形)   : [%g]\n", 100.123 );
	printf( "実数(精度)     : [%.5f]\n", 100.123 );
	printf( "実数(精度)     : [%.0f]\n", 100.123 );
	
	/* ポインタ表示 */
	printf( "ポインタ       : [%p]\n", &count );
}
