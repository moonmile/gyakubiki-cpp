#include <stdio.h>
void func2( void ) 
{
	extern int y;
//	extern int x;	// エラーになり参照できない
	y = 10;
	printf( "func2 y:%d\n", y );
}
