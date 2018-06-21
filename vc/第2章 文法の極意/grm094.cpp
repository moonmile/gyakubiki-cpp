#include <stdio.h>

typedef unsigned int UINT;		
typedef struct {				// �\����
	int x;
	int y;
} POINT;
typedef void FUNC( int );		// int �^�������Ɏ��֐��|�C���^

void func( int x )
{
	printf( "func x:%d\n", x );
}


void main( void )
{
	POINT pt;
	FUNC *f;		
	void (*f2)(int);		// FUNC �^�Ɠ���
	
	pt.x = pt.y = 0;
	printf( "pt.x:%d pt.y:%d\n", pt.x, pt.y );
	
	f = func;
	f( pt.x );
	f2 = func;
	f2( pt.x );
}

