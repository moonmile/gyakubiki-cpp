#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "ﾖｳｺｿ C/C++ ｾｶｲﾍ";
	char *p;
	
	/* アスキー文字を括弧[]で囲みます */
	for ( p = str; *p != '\0'; p++ ) {
		if (isascii(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
