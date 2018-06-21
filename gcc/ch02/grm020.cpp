#include <stdio.h>

void func( int *v )
{
	// 値を変更する
	*v = 10;
}
int main( void )
{
	int n = 0;
	
	printf("n: %d\n", n );
	func( &n );
	printf("n: %d\n", n );
	
	char str[] = "Hello C++ World.";
	for ( char *p = str; *p != '\0'; p++ ) {
		printf( "[%c]", *p );
	}
	printf("\n");
}
