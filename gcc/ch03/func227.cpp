#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "Hello world.";
	char *p;

	printf("変換前: %s\n", str );
	printf("変換後: ");
	for ( p = str; *p != '\0'; p++ ) {
		putchar( tolower(*p));
	}
	putchar('\n');
}
