#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello C/C++ World, 1st ?";
	char *p;
	
	/* �A���t�@�x�b�g�����l������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (isalnum(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
