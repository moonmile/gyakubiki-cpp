#include <stdio.h>
#include <float.h>

int main( void )
{
	// float型
	float x1 = 100.23 ;
	float x2 = FLT_MAX ;
	float x3 = FLT_MIN ;
	
	printf( "sizeof float: %d\n", sizeof(float));
	printf( "x1: %f\n", x1 );
	printf( "x2 max: %f %e\n", x2, x2 );
	printf( "x3 min: %f %e\n", x3, x3 );
}
