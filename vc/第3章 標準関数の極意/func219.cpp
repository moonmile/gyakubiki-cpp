#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *p;
	
	p = strstr( str, "fgh" );
	if ( p == NULL ) {
		printf("•¶Žš—ñ 'fgh' ‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš—ñ 'fgh' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p-str+1);
	}

	p = strstr( str, "FGH" );
	if ( p == NULL ) {
		printf("•¶Žš—ñ 'FGH' ‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš—ñ 'FHI' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p-str+1);
	}
}
