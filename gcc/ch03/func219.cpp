#include <stdio.h>
#include <string.h>

int main( void )
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *p;
	
	p = strstr( str, "fgh" );
	if ( p == NULL ) {
		printf("文字列 'fgh' が見つかりませんでした\n");
	} else {
		printf("文字列 'fgh' は %d 番目にあります\n", p-str+1);
	}

	p = strstr( str, "FGH" );
	if ( p == NULL ) {
		printf("文字列 'FGH' が見つかりませんでした\n");
	} else {
		printf("文字列 'FHI' は %d 番目にあります\n", p-str+1);
	}
}
