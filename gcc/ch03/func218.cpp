#include <stdio.h>
#include <string.h>

int main( void )
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *p;
	
	p = strchr( str, 'h' );
	if ( p == NULL ) {
		printf("文字 'h' が見つかりませんでした\n");
	} else {
		printf("文字 'h' は %d 番目にあります\n", p-str+1);
	}
	
	p = strchr( str, 'H' );
	if ( p == NULL ) {
		printf("文字 'H' が見つかりませんでした\n");
	} else {
		printf("文字 'H' は %d 番目にあります\n", p-str+1);
	}
}
