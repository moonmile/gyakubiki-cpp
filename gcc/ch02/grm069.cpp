#include <stdio.h>

int main( void )
{
	char str[] = "Hello";
	
	char *p;
	int i;
	for ( i = 0, p = str; *p != '\0'; i++, p++ ) {
		printf( "%d:[%c],", i, *p );
	}
	printf("\n");
}
