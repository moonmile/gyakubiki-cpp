#include <stdio.h>

int main( void )
{
	char buffer[10];
	
	printf("標準入力（stdin）から読み込み:");
	gets_s( buffer, 10 );
	printf("[%s]\n", buffer );
}
