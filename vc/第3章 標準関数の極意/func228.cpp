#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello C/C++ World.";
	char *p;
	
	/* ‘å•¶Žš‚ðŠ‡ŒÊ[]‚ÅˆÍ‚Ý‚Ü‚· */
	for ( p = str; *p != '\0'; p++ ) {
		if (isupper(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
