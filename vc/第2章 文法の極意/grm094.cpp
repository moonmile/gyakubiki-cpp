#include <stdio.h>

typedef unsigned int UINT;		
typedef struct {				// 構造体
	int x;
	int y;
} POINT;
typedef void FUNC( int );		// int 型を引数に持つ関数ポインタ

void func( int x )
{
	printf( "func x:%d\n", x );
}


void main( void )
{
	POINT pt;
	FUNC *f;		
	void (*f2)(int);		// FUNC 型と同じ
	
	pt.x = pt.y = 0;
	printf( "pt.x:%d pt.y:%d\n", pt.x, pt.y );
	
	f = func;
	f( pt.x );
	f2 = func;
	f2( pt.x );
}

