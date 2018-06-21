#include <stdio.h>
#include <string.h>

int main( void )
{
	int ret;
	
	ret = strncmp( "cat", "cats", 4 );
	printf( "'cat' と 'cats' の４文字を比較 [%d]\n", ret );
	ret = strncmp( "cat", "cats", 3 );
	printf( "'cat' と 'cats' の３文字を比較 [%d]\n", ret );
	ret = strncmp( "cat", "cats", 10 );
	printf( "'cat' と 'cats' の10文字を比較 [%d]\n", ret );
}
