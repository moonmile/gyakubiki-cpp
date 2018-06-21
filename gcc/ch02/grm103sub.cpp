#include <stdio.h>
static int x = 0;	// 定義可能
extern int y;		// 参照可能

void func2( void ) 
{
	y = 10;
	printf( "func2 y:%d\n", y );
}

