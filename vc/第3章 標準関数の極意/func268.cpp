/* cl /MT func244.cpp */
#include <windows.h>
#include <stdio.h>
#ifndef _MSC_VER
#error "only can used this function in MS-C"
#endif
#include <process.h>

volatile int repeat;

void thread( void *p )
{
	int i;
	for ( i=0; i<5; i++ ) {
		printf( "thread %d [%d]\n", p, i );
		Sleep( 1000 );
	}
	repeat = 0;
    _endthread();
}

void main( void )
{
	int i;
	
	puts( "_beginthread test" );
	
	for ( i=0; i<3; i++ ) {
		_beginthread( thread, 0, (void*)i );
		Sleep( 1000 );
	}
	repeat = 1;
	while ( repeat ) {
		Sleep( 700 );
	}
	puts( "_beginthread test end" );
}
