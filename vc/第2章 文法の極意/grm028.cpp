#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	int m, n;
	
	m = 10;
	n = 20;

	// ���l�̉��Z
	printf( "m + n = %d\n", m + n );
	
	// ������̌���
	string s, s1, s2;
	s1 = "Hello ";
	s2 = "C++ World.";
	s  = s1 + s2;
	cout << "s1 + s2 = " << s << endl;
}
