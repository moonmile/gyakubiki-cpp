#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = "C world";
	char dest[100];
	errno_t err ;
	
	strcpy_s( dest, sizeof(dest), "Hello " );
	printf( "追加する前: [%s]\n", dest );
	err = strncat_s( dest, sizeof(dest), src, 2 );
	printf( "追加した後: [%s]\n", dest );
	printf( "戻り値:     [%d]\n", err );

	strcpy_s( dest, sizeof(dest), "Hello " );
	printf( "追加する前: [%s]\n", dest );
	err = strncat_s( dest, sizeof(dest), src, 100 );
	printf( "追加した後: [%s]\n", dest );
	printf( "戻り値:     [%d]\n", err );
}

