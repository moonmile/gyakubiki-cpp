#include <stdio.h>
#include <ctype.h>

int main( void )
{
	int ch;
	char chr[20];
	
	for ( ch = 0; ch < 0x100; ch++ ) {
		if ( ch % 16 == 0 ) {
			printf("%04X: ", ch );
		}
		printf("%02x ", ch );
		if (isprint(ch)) {
			chr[ch%16] = ch;
		} else {
			chr[ch%16] = '.';
		}
		if ( ch % 16 == 15 ) {
			chr[16] = '\0';
			printf("%s\n", chr );
		}
	}
}
