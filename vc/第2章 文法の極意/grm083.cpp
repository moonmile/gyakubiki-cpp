#include <stdio.h>

void func( void )
{
	// func �֐����̓����ϐ��ł���A
	// main �֐��Œ�`����Ă���ϐ��Ƃ̓X�R�[�v���قȂ�
	int x, y;
	x = 10; y = 20;
	printf( "func x:%d y:%d\n", x, y );
}

void main( void )
{
	int x, y;
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	func();
	printf( "main x:%d y:%d\n", x, y );
}
