#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello C world";
	char dest[100] = {0};
	char *p;
	
	p = strncpy( dest, src, 5 );
	printf( "�R�s�[��: [%s]\n", src );
	printf( "�R�s�[��: [%s]\n", dest );
	printf( "�߂�l:   [%s]\n", p );

	p = strncpy( dest, src, 100 );
	printf( "�R�s�[��: [%s]\n", src );
	printf( "�R�s�[��: [%s]\n", dest );
	printf( "�߂�l:   [%s]\n", p );
}
