#include <stdio.h>
#define DEBUG

void main( void )
{
#undef DEBUG	// ����`�ɂ���
	
#ifdef DEBUG
	printf("debug mode\n" );
#else
	printf("release mode\n" );
#endif
}
