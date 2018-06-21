#include <stdio.h>

int main( void )
{
	int x, m, n;
	
	x = 10;
	// 代入
	m = x;
	printf( "x:%d m:%d\n", x, m );
	// 同じ値を代入
	n = m = 20;
	printf( "m:%d n:%d\n", m, n );
}
