#include <stdio.h>
#define ISZERO(_x)	((_x == 0)? 1: 0)

int main( void )
{
	int x = 0;
	
	printf("x is zero?: %d\n", ISZERO(x) );
}
