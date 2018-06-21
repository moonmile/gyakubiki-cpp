#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "Hello C/C++ World.";
	char *p;
	
	/* 小文字を括弧[]で囲みます */
	for ( p = str; *p != '\0'; p++ ) {
		if (islower(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
