#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "C world";
	char dest[100];
	char *p;
	
	strcpy( dest, "Hello " );
	printf( "�ǉ�����O: [%s]\n", dest );
	p = strncat( dest, src, 2 );
	printf( "�ǉ�������: [%s]\n", dest );
	printf( "�߂�l:     [%s]\n", p );

	strcpy( dest, "Hello " );
	printf( "�ǉ�����O: [%s]\n", dest );
	p = strncat( dest, src, 100 );
	printf( "�ǉ�������: [%s]\n", dest );
	printf( "�߂�l:     [%s]\n", p );
}

