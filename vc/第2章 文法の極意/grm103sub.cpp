#include <stdio.h>
static int x = 0;	// ��`�\
extern int y;		// �Q�Ɖ\

void func2( void ) 
{
	y = 10;
	printf( "func2 y:%d\n", y );
}

