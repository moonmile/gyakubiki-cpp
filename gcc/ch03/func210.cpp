#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = "C world";
	char dest[100];
	char *p;
	
	strcpy( dest, "Hello " );
	printf( "追加する前: [%s]\n", dest );
	p = strncat( dest, src, 2 );
	printf( "追加した後: [%s]\n", dest );
	printf( "戻り値:     [%s]\n", p );

	strcpy( dest, "Hello " );
	printf( "追加する前: [%s]\n", dest );
	p = strncat( dest, src, 100 );
	printf( "追加した後: [%s]\n", dest );
	printf( "戻り値:     [%s]\n", p );
}

