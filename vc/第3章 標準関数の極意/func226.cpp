#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char str[] = "Hello world.";
	char *p;

	printf("変換前: %s\n", str );
	printf("変換後: ");
	for ( p = str; *p != '\0'; p++ ) {
		putchar( toupper(*p));
	}
	putchar('\n');
}
