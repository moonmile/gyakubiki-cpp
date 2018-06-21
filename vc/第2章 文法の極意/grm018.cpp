#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 引数がない関数
int func1( void )
{
	puts("in func1");
	return 1;
}
// 戻り値がない関数
void func2( int x )
{
	printf("in func2 [%d]\n", x );
}

void main( void )
{
	int ret = func1();
	printf("in main [%d]", ret );
	
	func2(1);
	
	// 型を指定しないポインタ
	void *mem = malloc(10);
	memset( mem, 0, 10 );
	printf( "mem[0]: %x", ((unsigned char*)mem)[0] );
	free( mem );
}
