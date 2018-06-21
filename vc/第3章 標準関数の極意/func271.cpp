#include <windows.h>
#include <stdio.h>
#ifndef _MSC_VER
#error "only can used this function in MS-C"
#endif
#include <process.h>

volatile bool repeat;

unsigned int WINAPI thread( void *p )
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
    _endthreadex(i);

	return 0;
}

void main( void )
{
	int i;
	unsigned int addr[3];
	puts( "_beginthreadex test" );
	
	repeat = true;
	for ( i=0; i<3; i++ ) {
		_beginthreadex( NULL, 0, thread, (void*)i, 0, &addr[i] );
		Sleep( 1000 );
	}
	printf("I—¹‘Ò‚¿\n");
	getchar();
	repeat = false;
	getchar();
	puts( "_beginthreadex test end" );
}
