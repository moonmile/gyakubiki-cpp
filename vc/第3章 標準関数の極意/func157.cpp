#include <stdio.h>

void main( void )
{
	char *p;
	char buffer[] = "Hello world\n";
	int  ch;
	
	for ( p = buffer; *p != '\0'; p++ ) {
		ch = putc( *p, stdout );
		if ( ch == EOF ) {
			printf("putc ŠÖ”‚ÅƒGƒ‰[‚ª”­¶‚µ‚Ü‚µ‚½");
			break;
		}
	}
}
