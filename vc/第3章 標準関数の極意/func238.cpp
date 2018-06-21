#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "ºÝÆÁÊ C/C++ World, 1st ?";
	char *p;
	
	/* ‹ó”’ˆÈŠO‚ÌˆóŽš‰Â”\‚È•¶Žš‚ðŠ‡ŒÊ[]‚ÅˆÍ‚Ý‚Ü‚· */
	for ( p = str; *p != '\0'; p++ ) {
		if (isgraph(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
