#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello C/C++ World, 1st ?";
	char *p;
	
	/* ��؂蕶��������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (ispunct(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
