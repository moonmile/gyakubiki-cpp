#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char *mem;

	mem = (char*)malloc( 100 );
	if ( mem == NULL ) {
		printf("ƒƒ‚ƒŠ‚ª•s‘«‚µ‚Ä‚¢‚Ü‚·\n");
		return 0;
	}
	printf("ƒƒ‚ƒŠ [%p] ‚ğ‰ğ•ú‚µ‚Ü‚µ‚½\n", mem );
	free( mem );
	return 1;
}
