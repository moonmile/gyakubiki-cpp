#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp( const void *p1, const void *p2 )
{
	int i1 = *(int*)p1;
	int i2 = *(int*)p2;
	if ( i1 < i2 ) return -1;
	if ( i1 == i2 ) return 0;
	return 1;
}

int main( void )
{
	int i;
	int val[10];
	int *p, v;
	
	srand(time(NULL));
	
	for ( i=0; i<10; i++ ) val[i] = rand() % 10;
	
	printf( "val: " );
	for ( i=0; i<10; i++ ) printf("%d,", val[i] );
	printf( "\n" );
	
	qsort( val, 10, sizeof(int), comp );
	printf( "val: " );
	for ( i=0; i<10; i++ ) printf("%d,", val[i] );
	printf( "\n" );
	
	v = 5;
	p = (int*)bsearch( &v, val, 10, sizeof(int), comp );
	if ( p == NULL ) {
		printf( "見つからなかった\n" );
	} else {
		printf( "見つかった: %d\n", *p );
	}
}
