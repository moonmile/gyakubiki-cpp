#include <windows.h>
#include <stdio.h>
#ifndef _MSC_VER
#error "only can used this function in MS-C"
#endif
#include <process.h>

volatile bool repeat;

void thread( void *p )
{
	int i;
	for ( i=0; i<5; i++ ) {
		if ( repeat == false ) {
			printf( "thread %d end\n", p );
			break;
		}		
		printf( "thread %d [%d]\n", p, i );
		Sleep( 5000 );
	}
    _endthread();
}

void main( void )
{
	int i;
	
	puts( "_beginthread test" );
	repeat = true;
	for ( i=0; i<3; i++ ) {
		_beginthread( thread, 0, (void*)i );
		Sleep( 1000 );
	}
	printf("I—¹‘Ò‚¿\n");
	getchar();
	repeat = false;
	getchar();
	puts( "_beginthread test end" );
}
