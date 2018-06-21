#include <stdio.h>
#include <string.h>

int main( void )
{
	int ret;
	
	ret = strcmp( "cat", "cat" );
	printf( "'cat' と 'cat' の比較 [%d]\n", ret );
	
	ret = strcmp( "cat", "dog" );
	printf( "'cat' と 'dog' の比較 [%d]\n", ret );
	
	ret = strcmp( "cat", "CAT" );
	printf( "'cat' と 'CAT' の比較 [%d]\n", ret );
	
	ret = strcmp( "cat", "cats" );
	printf( "'cat' と 'cats' の比較 [%d]\n", ret );

	ret = strcmp( "cat", "" );
	printf( "'cat' と ''    の比較 [%d]\n", ret );
}

