#include <stdio.h>
#include <string.h>

int main( void )
{
	char src[] = " world";
	char dest[100];
	errno_t err;
	
	strcpy_s( dest, sizeof(dest), "Hello" );
	printf( "追加する前: [%s]\n", dest );
	err = strcat_s( dest, sizeof(dest), src );
	printf( "追加した後: [%s]\n", dest );
	printf( "戻り値:     [%d]\n", err );
}

