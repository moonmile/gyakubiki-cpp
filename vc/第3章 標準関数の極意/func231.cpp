#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello C/C++ World.";
	char *p;
	
	/* �A���t�@�x�b�g������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (isalpha(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
