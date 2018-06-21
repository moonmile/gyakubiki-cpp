#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[100];
	char *top, *p;
	strcpy(str, "100, 200, abc, efg, 1, END\n");
	
	/* 最初のトークンの呼び出し */
	p = strtok( str, " ,\n" );
	while ( p != NULL ) {
		printf( "文字列: [%s]\n", p );
		/* 次のトークンを探す */
		p = strtok( NULL, " ,\n" );
	}
}
