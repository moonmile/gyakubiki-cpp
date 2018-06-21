#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char *mem;

	mem = (char*)malloc( 100 );
	if ( mem == NULL ) {
		printf("メモリが不足しています\n");
		return 0;
	}
	printf("メモリ [%p] を解放しました\n", mem );
	free( mem );
	return 1;
}
