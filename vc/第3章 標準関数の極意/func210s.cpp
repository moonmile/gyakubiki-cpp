#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "C world";
	char dest[100];
	errno_t err ;
	
	strcpy_s( dest, sizeof(dest), "Hello " );
	printf( "�ǉ�����O: [%s]\n", dest );
	err = strncat_s( dest, sizeof(dest), src, 2 );
	printf( "�ǉ�������: [%s]\n", dest );
	printf( "�߂�l:     [%d]\n", err );

	strcpy_s( dest, sizeof(dest), "Hello " );
	printf( "�ǉ�����O: [%s]\n", dest );
	err = strncat_s( dest, sizeof(dest), src, 100 );
	printf( "�ǉ�������: [%s]\n", dest );
	printf( "�߂�l:     [%d]\n", err );
}

