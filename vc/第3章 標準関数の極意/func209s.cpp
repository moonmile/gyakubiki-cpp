#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = " world";
	char dest[100];
	errno_t err;
	
	strcpy_s( dest, sizeof(dest), "Hello" );
	printf( "�ǉ�����O: [%s]\n", dest );
	err = strcat_s( dest, sizeof(dest), src );
	printf( "�ǉ�������: [%s]\n", dest );
	printf( "�߂�l:     [%d]\n", err );
}

