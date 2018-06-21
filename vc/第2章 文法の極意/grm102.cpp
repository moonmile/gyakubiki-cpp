#include <stdio.h>
#include <stdlib.h>

int calc( int op, int x, int y ) 
{
	int ret = 0;
	
	switch( op ) {
	case '+': ret = x + y; break;
	case '-': ret = x - y; break;
	case '*': ret = x * y; break;
	case '/': ret = x / y; break;
	case '%': ret = x % y; break;
	default:  ret = -1;
	}
	return ret;
}

int main( int argc, char *argv[] ) 
{
	int x, y, op, ret;
	
	if ( argc != 4 ) return -1;
	x = atoi( argv[1] );
	y = atoi( argv[3] );
	op= argv[2][0];
	ret = calc( op, x, y );
	printf( "return: %d", ret );
	return ret;
}
