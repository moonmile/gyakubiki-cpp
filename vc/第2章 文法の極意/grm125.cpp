#include <stdio.h>
#include "grm125.h"

void main( void )
{
	printf( "lang: %d\n", LANG_CPP );
	
	char *lang[] = {
#include "grm125.txt"
	};
	
	for ( char **p = lang; *p != NULL; p++ ) {
		printf( "lang: %s\n", *p );
	}
}
