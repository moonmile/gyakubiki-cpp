#include <stdio.h>
#define DEBUG

int main( void )
{
#undef DEBUG	// 未定義にする
	
#ifdef DEBUG
	printf("debug mode\n" );
#else
	printf("release mode\n" );
#endif
}
