#include <stdio.h>

int main( void )
{
	char buffer[100];
	int n1, n2=0;
	
	/* 書式付きで読み込み */
	printf("文字列: ");
	scanf_s("%s",buffer, 99 );
	printf("2つの数値: ");
	scanf_s("%d %d", &n1, &n2);

	printf("文字列: [%s]\n", buffer );
	printf("数値:   [%d][%d]\n", n1, n2 );
}
