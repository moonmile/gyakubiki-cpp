#include <stdio.h>
#include <string.h>

void main( void )
{
	int ret;
	
	ret = stricmp( "cat", "cat" );
	printf( "'cat' �� 'cat' �̔�r [%d]\n", ret );
	
	ret = stricmp( "cat", "dog" );
	printf( "'cat' �� 'dog' �̔�r [%d]\n", ret );
	
	ret = stricmp( "cat", "CAT" );
	printf( "'cat' �� 'CAT' �̔�r [%d]\n", ret );
	
	ret = stricmp( "cat", "cats" );
	printf( "'cat' �� 'cats' �̔�r [%d]\n", ret );

	ret = stricmp( "cat", "" );
	printf( "'cat' �� ''    �̔�r [%d]\n", ret );
}
