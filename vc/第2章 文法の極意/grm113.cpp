#include <stdio.h>

#define DEBUG

void main( void )
{
#ifdef DEBUG
	printf("debug mode\n" );
#else
	printf("release mode\n" );
#endif
}
