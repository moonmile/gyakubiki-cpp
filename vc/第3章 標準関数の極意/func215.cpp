#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int n;
	
	n = -10;
	printf( "数値:[%d] 絶対値:[%d]\n", n , abs(n));
	n = +10;
	printf( "数値:[%d] 絶対値:[%d]\n", n , abs(n));
	n = 0x7FFFFFFF;
	printf( "数値:[%d] 絶対値:[%d]\n", n , abs(n));
	n = 0x80000000;	/* int の最小値は絶対値が取れない */
	printf( "数値:[%d] 絶対値:[%d]\n", n , abs(n));
	n = 0x80000001;
	printf( "数値:[%d] 絶対値:[%d]\n", n , abs(n));
	
	return 1;
}
