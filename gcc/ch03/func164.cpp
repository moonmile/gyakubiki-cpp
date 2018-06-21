#include <stdio.h>

int main( void )
{
	char buffer[100];
	
	printf("標準入力（stdin）から読み込み:");
	fgets( buffer, sizeof buffer, stdin );
	printf("[%s]\n", buffer );
}
