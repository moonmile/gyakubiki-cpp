#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	char *mem;
	
	if ( (mem = (char*)malloc( 100 )) == NULL ) {
		printf("メモリが不足しています\n");
		return 0;
	}
	memset( mem, 0, 100 );
	memset( mem, 'A', 10 );		/* 先頭１０バイトを 'A' で埋める */
	printf("100 バイト割り当てる: [%p]\n", mem );
	printf("先頭１０バイト: [%s]\n", mem );
	
	if ((mem = (char*)realloc( mem, 200 )) == NULL ) {
		printf("メモリが不足しています\n");
		return 0;
	}
	/* 位置が変更されても最初の内容を保持している */
	printf("200 バイトに拡張した: [%p]\n", mem );
	printf("先頭１０バイト: [%s]\n", mem );
	
	if ((mem = (char*)realloc( mem, 50 )) == NULL ) {
		printf("メモリが不足しています\n");
		return 0;
	}
	printf("50 バイトに縮小した: [%p]\n", mem );

	if ((mem = (char*)realloc( mem, 0 )) == NULL ) {
		printf("メモリが不足しています\n");
		return 0;
	}
	printf("0 バイトにした: [%p]\n", mem );

	free( mem );
	return 1;
}
