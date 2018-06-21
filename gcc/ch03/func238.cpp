#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "ｺﾝﾆﾁﾊ C/C++ World, 1st ?";
	char *p;
	
	/* 空白以外の印字可能な文字を括弧[]で囲みます */
	for ( p = str; *p != '\0'; p++ ) {
		if (isgraph(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
