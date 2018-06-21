#include <stdio.h>
#include <string.h>

void main( void )
{
	int ret;
	
	ret = stricmp( "cat", "cat" );
	printf( "'cat' ‚Æ 'cat' ‚Ì”äŠr [%d]\n", ret );
	
	ret = stricmp( "cat", "dog" );
	printf( "'cat' ‚Æ 'dog' ‚Ì”äŠr [%d]\n", ret );
	
	ret = stricmp( "cat", "CAT" );
	printf( "'cat' ‚Æ 'CAT' ‚Ì”äŠr [%d]\n", ret );
	
	ret = stricmp( "cat", "cats" );
	printf( "'cat' ‚Æ 'cats' ‚Ì”äŠr [%d]\n", ret );

	ret = stricmp( "cat", "" );
	printf( "'cat' ‚Æ ''    ‚Ì”äŠr [%d]\n", ret );
}
