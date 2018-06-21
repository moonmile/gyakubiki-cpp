#include <stdio.h>

int main( void )
{
#ifdef __cplusplus
	printf( "c++ compiler\n" );
#else
	printf( "c compiler\n" );
#endif
}
