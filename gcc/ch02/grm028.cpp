#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	int m, n;
	
	m = 10;
	n = 20;

	// 数値の加算
	printf( "m + n = %d\n", m + n );
	
	// 文字列の結合
	string s, s1, s2;
	s1 = "Hello ";
	s2 = "C++ World.";
	s  = s1 + s2;
	cout << "s1 + s2 = " << s << endl;
}
