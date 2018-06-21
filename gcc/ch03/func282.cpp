#include <stdio.h>
#include <setjmp.h>

jmp_buf mark;

int main( void )
{
	int ret;
	puts( "setjmp and longjmp test" );
	
	ret = setjmp( mark );
	if ( ret != 1 ) {
		puts("first");
		longjmp( mark, 1 );
	} 
	puts( "longjmp の後はここに来る" );
}
