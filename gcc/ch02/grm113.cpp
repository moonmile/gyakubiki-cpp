#include <stdio.h>

#define DEBUG

int main( void )
{
#ifdef DEBUG
	printf("debug mode\n" );
#else
	printf("release mode\n" );
#endif
}
