#include <stdio.h>

void main( void )
{
	char buffer[100];
	
	printf("標準入力（stdin）から読み込み:");
	gets( buffer );
	printf("[%s]\n", buffer );
}
