#include <stdio.h>

void main( void )
{
	int x, y;
	x = 1; y = 2;
	printf( "main x:%d y:%d\n", x, y );
	
	if ( x == 1 ) {
		// �u���b�N���ł̕ϐ��錾
		int x = 10;
		printf( "if-block x:%d y:%d\n", x, y );
	}
	// �����ŎQ�Ƃ����ϐ� x �� main �֐��Ő錾��������
	printf( "main x:%d y:%d\n", x, y );
}
