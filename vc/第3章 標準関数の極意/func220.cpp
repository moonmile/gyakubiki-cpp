#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "ABCDEFGabcdefgABCDEFG";
	char *p;
	
	p = strrchr( str, 'C' );
	if ( p == NULL ) {
		printf("•¶Žš 'C' ‚ÍŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš 'C' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p - str + 1 );
	}
	
	p = strrchr( str, 'c' );
	if ( p == NULL ) {
		printf("•¶Žš 'c' ‚ÍŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš 'c' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p - str + 1 );
	}

	p = strrchr( str, 'x' );
	if ( p == NULL ) {
		printf("•¶Žš 'x' ‚ÍŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	} else {
		printf("•¶Žš 'x' ‚Í %d ”Ô–Ú‚É‚ ‚è‚Ü‚·\n", p - str + 1 );
	}
}
