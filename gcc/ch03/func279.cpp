#include <stdio.h>
#include <stdlib.h>

void func( void )
{
	puts( "in sub function" );
	exit( 10 );
}


int main( void )
{
	puts( "test exit function begin" );
	func();
	puts( "test exit function end" );
	
	return 0;
}
