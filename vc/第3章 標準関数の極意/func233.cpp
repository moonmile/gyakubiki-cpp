#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello \tC/C++ World, 1st ?";
	char *p;
	
	/* ‹ó”’•¶Žš‚ðŠ‡ŒÊ[]‚ÅˆÍ‚Ý‚Ü‚· */
	for ( p = str; *p != '\0'; p++ ) {
		if (isspace(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
