#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "ֳ�� C/C++ ����";
	char *p;
	
	/* �A�X�L�[����������[]�ň݂͂܂� */
	for ( p = str; *p != '\0'; p++ ) {
		if (isascii(*p)) {
			printf("[%c]", *p );
		} else {
			putchar( *p );
		}
	}
	putchar('\n');
}
