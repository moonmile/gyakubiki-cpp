#include <stdio.h>
#include <time.h>
#include <math.h>

int main( void )
{
	clock_t start, end;
	double x;
	int i;
	
	start = clock();
	for ( i=0; i<100000; i++ ) {
		x = sqrt( 10.0 );
	}
	end   = clock();
	printf( "経過時間:%d\n", end - start );
}
