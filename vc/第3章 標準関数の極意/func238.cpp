#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "����� C/C++ World, 1st ?";
	char *p;
	
	/* �󔒈ȊO�̈󎚉\�ȕ���������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (isgraph(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
