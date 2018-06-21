#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main( void )
{
	long n, base;
	char *eptr, *nptr;
	char *str;
	
	str = "100"; base = 10;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	base = 8;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	base = 2;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	base = 16;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));

	str = "100"; base = 0;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	str = "0100"; base = 0;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	str = "0x100"; base = 0;
	printf("Šî”[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	
	nptr = "  100 200 300   ";
	for (;;) {
		n = strtol( nptr, &eptr, 0 );
		/* ‘–¸‚ªi‚ñ‚Å‚¢‚È‚¢‚Ì‚ÅI—¹‚Æ‚·‚é */
		if ( nptr == eptr ) break; 
		printf( "[%s] -> [%d]\n", nptr, n );
		nptr = eptr;
	}
}
