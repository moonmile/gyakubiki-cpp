#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// cout ���g��
	cout << "cout �̏ꍇ: " << str1 << endl;
	// const char * ��Ԃ�
	printf( "printf �̏ꍇ: %s\n", str1.c_str() );
}
