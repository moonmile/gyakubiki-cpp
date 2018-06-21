#include <stdio.h>

int main( void )
{
	int n;
	char ch;
	
	printf("数値と1文字: ");
	scanf("%d %c", &n, &ch );
	printf( "[%d][%c]\n", n, ch );

	int &m = n;	// 参照を使う
	m = 0;
	printf( "n:[%d] m:[%d]\n", n, m );
}
