#include <stdio.h>
#include <stdlib.h>

int comp( const void *p1, const void *p2 )
{
	int i1 = *(int*)p1;
	int i2 = *(int*)p2;
	return ( i1 < i2 );
}

int main( void )
{
	int i;
	int val[100];
	int *p, v;
	
	for ( i=0; i<100; i++ ) val[i] = i;
	
	v = 55;
	p = (int*)bsearch( &v, val, 100, sizeof( int), comp );
	
	if ( p == NULL ) {
		printf( "見つからなかった\n" );
	} else {
		printf( "見つかった: %d\n", *p );
	}

	v = -1;
	p = (int*)bsearch( &v, val, 100, sizeof( int), comp );
	
	if ( p == NULL ) {
		printf( "見つからなかった\n" );
	} else {
		printf( "見つかった: %d\n", *p );
	}
}
