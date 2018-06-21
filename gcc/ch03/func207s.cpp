#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = "Hello world";
	char dest[100];
	
	errno_t err = strcpy_s( dest, sizeof(dest), src );
	printf( "コピー元: [%s]\n", src );
	printf( "コピー先: [%s]\n", dest );
	printf( "戻り値:   [%d]\n", err );
}
