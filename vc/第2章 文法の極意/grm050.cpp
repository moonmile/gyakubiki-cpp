#include <stdio.h>
#include <ctype.h>

void main( void )
{
	char ch;
	
	printf( "�P��������: " ); 
	scanf( "%c", &ch );
	
	if ( !isalpha( ch ) ) {
		printf( "[%c] �̓A���t�@�x�b�g�ł͂Ȃ�", ch );
	} else {
		printf( "[%c] �̓A���t�@�x�b�g\n", ch );
	}
}
