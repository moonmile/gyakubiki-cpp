#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello world";
	char dest[100];
	
	errno_t err = strcpy_s( dest, sizeof(dest), src );
	printf( "�R�s�[��: [%s]\n", src );
	printf( "�R�s�[��: [%s]\n", dest );
	printf( "�߂�l:   [%d]\n", err );
}
