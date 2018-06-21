#include <stdio.h>

void func( int *v )
{
	// ’l‚ğ•ÏX‚·‚é
	*v = 10;
}
void main( void )
{
	int n = 0;
	
	printf("n: %d\n", n );
	func( &n );
	printf("n: %d\n", n );
	
	char str[] = "Hello C++ World.";
	for ( char *p = str; *p != '\0'; p++ ) {
		printf( "[%c]", *p );
	}
}
