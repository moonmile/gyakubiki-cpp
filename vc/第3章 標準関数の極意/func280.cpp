#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	char *env;
	
	env = getenv( "USERNAME" );
	printf( "USERNAME = %s\n", env );
	
	env = getenv( "NO_ENV_VALUE" );
	printf( "NO_ENV_VALUE = %s\n", env );
}
