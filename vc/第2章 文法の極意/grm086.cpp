#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char ch1, ch2;
	
	printf( "�Q��������: " ); 
	scanf( "%c%c", &ch1, &ch2 );
	
	int r = ( isalpha( ch1 ) && isalpha( ch2 ) );
	if ( r ) {
		printf( "[%c][%c] �͗����A���t�@�x�b�g\n", ch1, ch2 );
	} else {
		printf( "[%c][%c] �͂��̑��̕���\n", ch1, ch2 );
	}
}
