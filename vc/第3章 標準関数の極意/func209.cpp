#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = " world";
	char dest[100];
	char *p;
	
	strcpy( dest, "Hello" );
	printf( "�ǉ�����O: [%s]\n", dest );
	p = strcat( dest, src );
	printf( "�ǉ�������: [%s]\n", dest );
	printf( "�߂�l:     [%s]\n", p );
}

