#include <stdio.h>

void main( void )
{
	int n;
	char ch;
	
	printf("���l��1����: ");
	scanf("%d %c", &n, &ch );
	printf( "[%d][%c]\n", n, ch );

	int &m = n;	// �Q�Ƃ��g��
	m = 0;
	printf( "n:[%d] m:[%d]\n", n, m );
}
