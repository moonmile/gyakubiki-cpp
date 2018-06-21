#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "Hello C/C++ World, 1st ?";
	char *p;
	
	/* 区切り文字を括弧[]で囲みます */
	for ( p = str; *p != '\0'; p++ ) {
		if (ispunct(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
