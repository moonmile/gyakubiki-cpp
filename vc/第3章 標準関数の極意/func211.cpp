#include <stdio.h>
#include <string.h>

void main( void )
{
	int ret;
	
	ret = strcmp( "cat", "cat" );
	printf( "'cat' ‚Æ 'cat' ‚Ì”äŠr [%d]\n", ret );
	
	ret = strcmp( "cat", "dog" );
	printf( "'cat' ‚Æ 'dog' ‚Ì”äŠr [%d]\n", ret );
	
	ret = strcmp( "cat", "CAT" );
	printf( "'cat' ‚Æ 'CAT' ‚Ì”äŠr [%d]\n", ret );
	
	ret = strcmp( "cat", "cats" );
	printf( "'cat' ‚Æ 'cats' ‚Ì”äŠr [%d]\n", ret );

	ret = strcmp( "cat", "" );
	printf( "'cat' ‚Æ ''    ‚Ì”äŠr [%d]\n", ret );
}

