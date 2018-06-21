#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *p;
	
	p = strchr( str, 'h' );
	if ( p == NULL ) {
		printf("•¶Žš 'h' ‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš 'h' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p-str+1);
	}
	
	p = strchr( str, 'H' );
	if ( p == NULL ) {
		printf("•¶Žš 'H' ‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš 'H' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p-str+1);
	}
}
