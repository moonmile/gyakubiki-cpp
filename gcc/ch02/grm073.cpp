#include <stdio.h>

int main( void )
{
	int i;

	for ( i=0; i<10; i++ ) {
		// 偶数の場合は以下の処理を飛ばす
		if ( i % 2 == 0 ) continue;
		printf( "[%d],", i );
	}
	printf( "\n" );
}
