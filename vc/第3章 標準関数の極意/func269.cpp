/* cl /MT func245.cpp */
#include <windows.h>
#include <stdio.h>
#ifndef _MSC_VER
#error "only can used this function in MS-C"
#endif
#include <process.h>

volatile int repeat;

unsigned int WINAPI thread( void *p )
{
	int i;
	for ( i=0; i<5; i++ ) {
		printf( "thread %d [%d]\n", p, i );
		Sleep( 1000 );
	}
	repeat--;
    _endthreadex(0);

	return 0;
}

void main( void )
{
	int i;
	unsigned int addr;
	puts( "_beginthreadex test" );
	
	for ( i=0; i<3; i++ ) {
		_beginthreadex( NULL, 0, thread, (void*)i, 0, &addr );
		Sleep( 1000 );
	}
	repeat = 3;
	while ( repeat ) {
		Sleep( 700 );
	}
	puts( "_beginthreadex test end" );
}
