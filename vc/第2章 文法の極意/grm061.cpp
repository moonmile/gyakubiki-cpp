#include <stdio.h>
#include <ctype.h>

void main( void )
{
	int ch;
	
	printf( "��������: " );
	
	ch = fgetc( stdin );
	
	if ( isalpha( ch ) ) {
		printf( "[%c] �̓A���t�@�x�b�g\n", ch );
	} else if ( isdigit( ch ) ) {
		printf( "[%c] �͐��l\n", ch );
	} else {
		printf( "[%c] �͂��̑��̕���\n", ch );
	}
}
