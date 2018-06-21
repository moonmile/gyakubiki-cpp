#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main( void )
{
	int *p1	= new int ;		// int型
	int *p2 = new int(10);	// int型(初期化)
	*p1 = 20;
	printf( "int 型: %d\n", *p1 );
	printf( "int 型: %d\n", *p2 );
	delete p1;
	delete p2;
	
	int *ary = new int[10];	// int型の配列
	for ( int i=0; i<10; i++ ) {
		ary[i] = i;
	}
	int **pp = new( int * );	// int型のポインタ
	int x = 10;
	*pp = &x;
	printf( "int 型の配列: %d\n", ary[1] );
	printf( "int 型のポインタ: %x %d\n", *pp, **pp );
	delete [] ary;
	delete pp;
	
	char hello[] = "Hello C/C++ World.";
	char *str = new char[sizeof(hello)];	// char型の配列
	strcpy( str, hello );
	string *s = new string( hello );		// stringクラス
	printf( "char型の配列: %s\n", str );
	printf( "stringクラス: %s\n", s->c_str());
	delete [] str;
	delete s;
}
