#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = "Hello C world";
	char dest[100] = {0};
	errno_t err ;
	
	err = strncpy_s( dest, sizeof(dest), src, 5 );
	printf( "コピー元: [%s]\n", src );
	printf( "コピー先: [%s]\n", dest );
	printf( "戻り値:   [%d]\n", err );

	err = strncpy_s( dest, sizeof(dest), src, 100 );
	printf( "コピー元: [%s]\n", src );
	printf( "コピー先: [%s]\n", dest );
	printf( "戻り値:   [%d]\n", err );
}
