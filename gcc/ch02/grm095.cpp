#include <stdio.h>
#include <stdlib.h>

void setstring( void *data, int size ) 
{
	char *p = (char*)data;
	
	for ( int i=0; i<size-1; i++, p++ ) {
		*p = '*';
	}
	*p = '\0';
}

int main( void )
{
	void *p;
	
	p = malloc( 10 );
	setstring( p, 10 );
	
	printf( "[%s]\n", (char*)p );
}
