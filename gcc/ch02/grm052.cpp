#include <stdio.h>

int main( void )
{
	char *str1 = "Hello";
	printf( "str1: %s\n", str1 );
	
	char str2[] = "Hello";
	printf( "str2: " );
	for ( char *p = str2; *p != '\0'; p++ ) {
		putchar( *p );
	}
	putchar( '\n' );
}
