#include <stdio.h>

void main( void )
{
	char *p;
	char buffer[] = "Hello world\n";
	int  ch;
	
	for ( p = buffer; *p != '\0'; p++ ) {
		ch = putchar( *p );
		if ( ch == EOF ) {
			printf("putchar ŠÖ”‚ÅƒGƒ‰[‚ª”­¶‚µ‚Ü‚µ‚½");
			break;
		}
	}
}
