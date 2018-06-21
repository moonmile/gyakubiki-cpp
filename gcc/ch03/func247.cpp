#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	char src[] = "Hello world";
	char dest[100];
	char *p;
	
	memset( dest, 0, sizeof dest );
	/* 先頭から５バイトコピーします */
	p = (char*)memcpy( dest, src, 5 );
	printf("5 バイトコピー: [%s]\n", dest );
	
	memset( dest, 0, sizeof dest );
	/* 先頭から０バイトコピーします */
	p = (char*)memcpy( dest, src, 0 );
	printf("0 バイトコピー: [%s]\n", dest );
}
