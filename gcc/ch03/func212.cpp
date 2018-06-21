#include <stdio.h>
#include <string.h>

int main( void )
{
	int ret;
	
	ret = strcasecmp( "cat", "cat" );
	printf( "'cat' と 'cat' の比較 [%d]\n", ret );
	
	ret = strcasecmp( "cat", "dog" );
	printf( "'cat' と 'dog' の比較 [%d]\n", ret );
	
	ret = strcasecmp( "cat", "CAT" );
	printf( "'cat' と 'CAT' の比較 [%d]\n", ret );
	
	ret = strcasecmp( "cat", "cats" );
	printf( "'cat' と 'cats' の比較 [%d]\n", ret );

	ret = strcasecmp( "cat", "" );
	printf( "'cat' と ''    の比較 [%d]\n", ret );
}
