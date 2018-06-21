#include <stdio.h>

int main( void )
{
	int count = 1234;
	int ch = 'A';
	char str[] = "Hello world";
	char buff[100];
	
	sprintf( buff, "数値を出力             : [%d]\n", count );
	printf( buff );

	/* 文字を出力 */
	sprintf( buff, "文字を出力             : [%c]\n", ch );
	printf( buff );
	
	/* 文字列を出力 */
	sprintf( buff, "文字列を出力 　　　　　: [%s]\n", str );
	printf( buff );

	/* 基数を変えて出力 */
	sprintf( buff, "１０進数               : [%d]\n", count );
	printf( buff );

	/* 実数の表示 */
	sprintf( buff, "実数(double)   : [%e]\n", 100.123 );
	printf( buff );
	
	/* ポインタ表示 */
	sprintf( buff, "ポインタ       : [%p]\n", &count );
	printf( buff );
}
