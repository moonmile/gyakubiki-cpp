#include <stdio.h>
#include <string.h>

void main( void )
{
	int ret;
	
	ret = strncmp( "cat", "cats", 4 );
	printf( "'cat' �� 'cats' �̂S�������r [%d]\n", ret );
	ret = strncmp( "cat", "cats", 3 );
	printf( "'cat' �� 'cats' �̂R�������r [%d]\n", ret );
	ret = strncmp( "cat", "cats", 10 );
	printf( "'cat' �� 'cats' ��10�������r [%d]\n", ret );
}
