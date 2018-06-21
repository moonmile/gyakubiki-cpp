#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( void )
{
	long n, base;
	char *eptr, *nptr;
	char *str;
	
	str = "100"; base = 10;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	base = 8;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	base = 2;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	base = 16;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));

	str = "100"; base = 0;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	str = "0100"; base = 0;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	str = "0x100"; base = 0;
	printf("基数[%2d]: [%s] -> [%d]\n", 
		base, str, strtol(str, &eptr, base ));
	
	nptr = "  100 200 300   ";
	for (;;) {
		n = strtol( nptr, &eptr, 0 );
		/* 走査が進んでいないので終了とする */
		if ( nptr == eptr ) break; 
		printf( "[%s] -> [%d]\n", nptr, n );
		nptr = eptr;
	}
}
