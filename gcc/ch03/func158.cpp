#include <stdio.h>

int main( void )
{
	char *p;
	char buffer[] = "Hello world\n";
	int  ch;
	
	for ( p = buffer; *p != '\0'; p++ ) {
		ch = putchar( *p );
		if ( ch == EOF ) {
			printf("putchar 関数でエラーが発生しました");
			break;
		}
	}
}
