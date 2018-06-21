#include <stdio.h>
#include <string>
using namespace std;

void main( void )
{
	int *p1	= new int ;		// int型
	*p1 = 20;
	printf( "int 型: %d\n", *p1 );
	delete p1;				// 解放
	
	int *ary = new int[10];	// int型の配列
	for ( int i=0; i<10; i++ ) {
		ary[i] = i;
	}
	printf( "int 型の配列: %d\n", ary[1] );
	delete [] ary;			// 配列を解放
	
	char hello[] = "Hello C/C++ World.";
	string *s = new string( hello );
	printf( "stringクラス: %s\n", s->c_str());
	delete s;				// オブジェクトを解放
}
