#include <stdio.h>
#include <float.h>

void main( void )
{
	// doubleå^
	double x1 = 100.23 ;
	double x2 = DBL_MAX ;
	double x3 = DBL_MIN ;
	
	printf( "sizeof double: %d\n", sizeof(double));
	printf( "x1: %f\n", x1 );
	printf( "x2 max: %e\n", x2 );
	printf( "x3 min: %e\n", x3 );
}
	