#include <stdio.h>

int main( void )
{
	char *p;
	char buffer[] = "Hello world\n";
	int  ch;
	
	for ( p = buffer; *p != '\0'; p++ ) {
		ch = putc( *p, stdout );
		if ( ch == EOF ) {
			printf("putc 関数でエラーが発生しました");
			break;
		}
	}
}
