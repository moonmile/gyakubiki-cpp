#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello world.";
	char *p;

	printf("�ϊ��O: %s\n", str );
	printf("�ϊ���: ");
	for ( p = str; *p != '\0'; p++ ) {
		putchar( tolower(*p));
	}
	putchar('\n');
}
