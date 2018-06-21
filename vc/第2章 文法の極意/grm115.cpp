#include <stdio.h>
#define VERSION 3

void main( void )
{

#if VERSION >= 3
	printf("version %d\n", VERSION );
#else
	printf("sorry. not use this version.\n" );
#endif
}
