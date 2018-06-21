#include <stdio.h>

int main( void )
{
	char buffer[100];
	int n;
	char ch;
	double d;
	
	/* 書式付きで読み込み */
	printf("文字列: ");
	scanf("%s", buffer );
	printf("数値: ");
	scanf("%d", &n );
	printf("実数: ");
	scanf("%lf", &d ); 

	printf("文字列: [%s]\n", buffer );
	printf("数値:   [%d]\n", n );
	printf("実数:   [%lf]\n", d );
}
