#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = " world";
	char dest[100];
	errno_t err;
	
	strcpy_s( dest, sizeof(dest), "Hello" );
	printf( "’Ç‰Á‚·‚é‘O: [%s]\n", dest );
	err = strcat_s( dest, sizeof(dest), src );
	printf( "’Ç‰Á‚µ‚½Œã: [%s]\n", dest );
	printf( "–ß‚è’l:     [%d]\n", err );
}

