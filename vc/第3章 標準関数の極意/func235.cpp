#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello Java\x08\x08\x08\x08""C/C++ world.";
	char *p;
	
	/* コントロールコードを ^@ 形式で表記します */
	for ( p = str; *p != '\0'; p++ ) {
		if (iscntrl(*p)) {
			printf("^%c", '@'+*p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
