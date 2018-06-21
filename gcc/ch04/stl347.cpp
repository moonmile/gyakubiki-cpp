#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	string str2("Hello world.");
	// string型で比較	
	if ( str1 == str2 ) {
		cout << "文字列は等しい" << endl;
	} else {
		cout << "文字列は異なる" << endl;
	}
	// char*型で比較
	if ( str1 == "Hello world." ) {
		cout << "文字列は等しい" << endl;
	} else {
		cout << "文字列は異なる" << endl;
	}
}
