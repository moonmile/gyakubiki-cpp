#include <stdio.h>
#include <setjmp.h>

jmp_buf mark;

int func( void )
{
	puts( "in func" );
	longjmp( mark, -1 );
	puts( "longjmp の後ろには来ない" );
	
	return 0;
}


int main( void )
{
	int ret;
	
	puts( "setjmp and longjmp test" );
	
	ret = setjmp( mark );
	if ( ret == 0 ) {
		func();
	} else {
		puts( "longjmp の後はここに来る" );
	}
}
