#include <stdio.h>
#include <stdlib.h>

void exitfunc( void );

void main( void )
{
	atexit( exitfunc );
	puts( "test atexit function" );
}

void exitfunc( void )
{
	puts( "in exitfunc" );
}
