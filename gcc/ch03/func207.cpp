#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = "Hello world";
	char dest[100];
	char *p;
	
	p = strcpy( dest, src );
	printf( "コピー元: [%s]\n", src );
	printf( "コピー先: [%s]\n", dest );
	printf( "戻り値:   [%s]\n", p );
}
