#include <stdio.h>

// 参照を利用
void calc( int x, int &y )
{
	y += x;
}
// ポインタを利用
void calc( int x, int *p )
{
	*p += x;
}
int main( void )
{
	int x, y, i;
	
	// 参照バージョン
	x = y = 1;
	for ( i=0; i<10; i++ ) {
		calc( x, y );
		printf( "%d,", y );
		x = y;
	}
	printf( "\n" );
	
	// ポインタバージョン
	x = y = 1;
	for ( i=0; i<10; i++ ) {
		calc( x, &y );
		printf( "%d,", y );
		x = y;
	}
	printf( "\n" );
}
