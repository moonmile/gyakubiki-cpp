#include <stdio.h>

#define DEBUG

int main( void )
{
#ifndef DEBUG
	printf("release mode\n" );
#else
	printf("debug mode\n" );
#endif
}
