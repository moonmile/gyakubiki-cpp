#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int n;
	
	n = -10;
	printf( "���l:[%d] ��Βl:[%d]\n", n , abs(n));
	n = +10;
	printf( "���l:[%d] ��Βl:[%d]\n", n , abs(n));
	n = 0x7FFFFFFF;
	printf( "���l:[%d] ��Βl:[%d]\n", n , abs(n));
	n = 0x80000000;	/* int �̍ŏ��l�͐�Βl�����Ȃ� */
	printf( "���l:[%d] ��Βl:[%d]\n", n , abs(n));
	n = 0x80000001;
	printf( "���l:[%d] ��Βl:[%d]\n", n , abs(n));
	
	return 1;
}
