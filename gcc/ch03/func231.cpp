#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "Hello C/C++ World.";
	char *p;
	
	/* アルファベットを括弧[]で囲みます */
	for ( p = str; *p != '\0'; p++ ) {
		if (isalpha(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
