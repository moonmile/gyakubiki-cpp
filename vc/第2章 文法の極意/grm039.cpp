#include <stdio.h>

void main( void )
{
	int x, m, n;
	
	x = 10;
	// ���
	m = x;
	printf( "x:%d m:%d\n", x, m );
	// �����l����
	n = m = 20;
	printf( "m:%d n:%d\n", m, n );
}
