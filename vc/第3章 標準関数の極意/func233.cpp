#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello \tC/C++ World, 1st ?";
	char *p;
	
	/* �󔒕���������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (isspace(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
