#include <stdio.h>
#include <stdlib.h>

void exitfunc( void );

int main( void )
{
	atexit( exitfunc );
	puts( "test atexit function" );
}

void exitfunc( void )
{
	puts( "in exitfunc" );
}
