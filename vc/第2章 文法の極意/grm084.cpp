#include <stdio.h>
int x, y;				// �O���[�o���ϐ�

void func( void ) {
	int x = 10;			// �����ϐ�
	y = 20;				// �O���[�o���ϐ���ύX
	printf( "func x:%d y:%d\n", x, y );
}

void main( void )
{
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	func();
	printf( "main x:%d y:%d\n", x, y );
}
