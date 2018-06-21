#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main( void )
{
	string str1("Hello C++ world.");

	// cout を使う
	cout << "cout の場合: " << str1 << endl;
	// const char * を返す
	printf( "printf の場合: %s\n", str1.c_str() );
}
