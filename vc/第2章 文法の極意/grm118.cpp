#include <stdio.h>
#define VERSION 1

#if VERSION < 3
#error "version error. need ver.3"
#endif

void main( void )
{
	printf( "version: %d\n", VERSION );
}
