#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello C/C++ World, 1st ?";
	char *p;
	
	/* ���l������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (isdigit(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
