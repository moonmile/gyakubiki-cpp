#include <stdio.h>
void func2( void ) 
{
	extern int y;
//	extern int x;	// �G���[�ɂȂ�Q�Ƃł��Ȃ�
	y = 10;
	printf( "func2 y:%d\n", y );
}
