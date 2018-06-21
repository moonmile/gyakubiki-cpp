#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "Hello \tC/C++ World, 1st ?";
	char *p;
	
	/* 空白文字を括弧[]で囲みます */
	for ( p = str; *p != '\0'; p++ ) {
		if (isspace(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
