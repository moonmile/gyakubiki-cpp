#include <stdio.h>
#include <time.h>
#include <math.h>

void main( void )
{
	clock_t start, end;
	double x;
	int i;
	
	start = clock();
	for ( i=0; i<100000; i++ ) {
		x = sqrt( 10.0 );
	}
	end   = clock();
	printf( "Œo‰ßŽžŠÔ:%d\n", end - start );
}
