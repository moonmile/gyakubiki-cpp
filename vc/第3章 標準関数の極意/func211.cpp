#include <stdio.h>
#include <string.h>

void main( void )
{
	int ret;
	
	ret = strcmp( "cat", "cat" );
	printf( "'cat' �� 'cat' �̔�r [%d]\n", ret );
	
	ret = strcmp( "cat", "dog" );
	printf( "'cat' �� 'dog' �̔�r [%d]\n", ret );
	
	ret = strcmp( "cat", "CAT" );
	printf( "'cat' �� 'CAT' �̔�r [%d]\n", ret );
	
	ret = strcmp( "cat", "cats" );
	printf( "'cat' �� 'cats' �̔�r [%d]\n", ret );

	ret = strcmp( "cat", "" );
	printf( "'cat' �� ''    �̔�r [%d]\n", ret );
}

