#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello world";
	char dest[100];
	char *p;
	
	p = strcpy( dest, src );
	printf( "�R�s�[��: [%s]\n", src );
	printf( "�R�s�[��: [%s]\n", dest );
	printf( "�߂�l:   [%s]\n", p );
}
