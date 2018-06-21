#include <stdio.h>
#include <string.h>

void main( void )
{
	int ret;
	
	ret = strncmp( "cat", "cats", 4 );
	printf( "'cat' ‚Æ 'cats' ‚Ì‚S•¶Žš‚ð”äŠr [%d]\n", ret );
	ret = strncmp( "cat", "cats", 3 );
	printf( "'cat' ‚Æ 'cats' ‚Ì‚R•¶Žš‚ð”äŠr [%d]\n", ret );
	ret = strncmp( "cat", "cats", 10 );
	printf( "'cat' ‚Æ 'cats' ‚Ì10•¶Žš‚ð”äŠr [%d]\n", ret );
}
