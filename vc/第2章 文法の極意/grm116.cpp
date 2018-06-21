#include <stdio.h>
#define DEBUG

void main( void )
{
#undef DEBUG	// –¢’è‹`‚É‚·‚é
	
#ifdef DEBUG
	printf("debug mode\n" );
#else
	printf("release mode\n" );
#endif
}
