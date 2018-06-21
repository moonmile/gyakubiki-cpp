#include <stdio.h>

void main( void )
{
	int i, ch;
	for ( i=0, ch='A'; i<10; i++, ch++ ) {
		printf( "%d:[%c],", i, ch );
	}
}
