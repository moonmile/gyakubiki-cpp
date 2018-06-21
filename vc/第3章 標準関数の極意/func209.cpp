#include <stdio.h>
#include <string.h>

void main( void )
{
	char src[] = " world";
	char dest[100];
	char *p;
	
	strcpy( dest, "Hello" );
	printf( "’Ç‰Á‚·‚é‘O: [%s]\n", dest );
	p = strcat( dest, src );
	printf( "’Ç‰Á‚µ‚½Œã: [%s]\n", dest );
	printf( "–ß‚è’l:     [%s]\n", p );
}

