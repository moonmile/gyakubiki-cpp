#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("C++");
	string str2("Java");
	// string型で比較
	if ( str1 != str2 ) {
		cout << "文字列は異なる" << endl;
	} else {
		cout << "文字列は等しい" << endl;
	}
	// char*型で比較
	if ( str1 != "Java" ) {
		cout << "文字列は異なる" << endl;
	} else {
		cout << "文字列は等しい" << endl;
	}
}
