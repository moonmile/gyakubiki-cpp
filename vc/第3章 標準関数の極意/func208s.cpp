#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello C world";
	char dest[100] = {0};
	errno_t err ;
	
	err = strncpy_s( dest, sizeof(dest), src, 5 );
	printf( "�R�s�[��: [%s]\n", src );
	printf( "�R�s�[��: [%s]\n", dest );
	printf( "�߂�l:   [%d]\n", err );

	err = strncpy_s( dest, sizeof(dest), src, 100 );
	printf( "�R�s�[��: [%s]\n", src );
	printf( "�R�s�[��: [%s]\n", dest );
	printf( "�߂�l:   [%d]\n", err );
}
