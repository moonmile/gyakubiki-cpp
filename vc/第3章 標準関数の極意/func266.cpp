#include <stdio.h>
#define NDEBUG 
#include <assert.h>

void print( char *str )
{
	assert( str != NULL );
	printf("%s\n", str );
}

void main( void )
{
	print( "test assert function begin" );
	print( NULL );
	print( "test assert function end." );
}
