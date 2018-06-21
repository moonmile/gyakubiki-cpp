#include <stdio.h>

struct POINT {
	int x, y ;
};
int main( void )
{
	POINT pt = { 10, 20 };
	
	printf( "point: %d %d\n", pt.x, pt.y );
}
