#include <stdio.h>

int main( void )
{
	int i, j;
	
	for ( i=1; i<10; i++ ) {
		for ( j=1; j<10; j++ ) {
			// 20 以上の時 goto 文でループを抜ける
			if ( i*j > 20 ) goto loopend;
			printf( "[%d],", i*j );
		}
	}
loopend:
	printf( "\n" );
}
