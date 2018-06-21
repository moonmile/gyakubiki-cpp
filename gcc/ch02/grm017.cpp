#include <stdio.h>
#include <stdlib.h>
#include <climits>

int main( void )
{
	// long long 型
	long long x1 = 10;
	long long x2 = LLONG_MAX ;
	long long x3 = LLONG_MIN ;
	
	printf( "sizeof long long: %d\n", sizeof(long long));
	printf( "x1: %lld\n", x1 );
	printf( "x2: %lld %llx\n", x2, x2 );
	printf( "x2: %lld %llx\n", x3, x3 );
}
