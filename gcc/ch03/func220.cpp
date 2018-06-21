#include <stdio.h>
#include <string.h>

int main( void )
{
	char str[] = "ABCDEFGabcdefgABCDEFG";
	char *p;
	
	p = strrchr( str, 'C' );
	if ( p == NULL ) {
		printf("文字 'C' は見つかりませんでした\n");
	} else {
		printf("文字 'C' は %d 番目にあります\n", p - str + 1 );
	}
	
	p = strrchr( str, 'c' );
	if ( p == NULL ) {
		printf("文字 'c' は見つかりませんでした\n");
	} else {
		printf("文字 'c' は %d 番目にあります\n", p - str + 1 );
	}

	p = strrchr( str, 'x' );
	if ( p == NULL ) {
		printf("文字 'x' は見つかりませんでした\n");
	} else {
		printf("文字 'x' は %d 番目にあります\n", p - str + 1 );
	}
}
