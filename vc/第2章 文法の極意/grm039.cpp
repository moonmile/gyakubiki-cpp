#include <stdio.h>

void main( void )
{
	int x, m, n;
	
	x = 10;
	// ‘ã“ü
	m = x;
	printf( "x:%d m:%d\n", x, m );
	// “¯‚¶’l‚ð‘ã“ü
	n = m = 20;
	printf( "m:%d n:%d\n", m, n );
}
