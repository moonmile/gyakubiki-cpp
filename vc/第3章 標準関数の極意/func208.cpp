#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello C world";
	char dest[100] = {0};
	char *p;
	
	p = strncpy( dest, src, 5 );
	printf( "コピー元: [%s]\n", src );
	printf( "コピー先: [%s]\n", dest );
	printf( "戻り値:   [%s]\n", p );

	p = strncpy( dest, src, 100 );
	printf( "コピー元: [%s]\n", src );
	printf( "コピー先: [%s]\n", dest );
	printf( "戻り値:   [%s]\n", p );
}
