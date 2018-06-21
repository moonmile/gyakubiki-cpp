#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("C++");
	string str2("Java");
	// 異なる場合
	if ( str1 < str2 ) {
		cout << "[" << str1 << "]" << "は小さい" << endl;
	} else {
		cout << "[" << str1 << "]" << "は大きい" << endl;
	}
	// 等しい場合
	if ( str1 < "C++" ) {
		cout << "[" << str1 << "]" << "は小さい" << endl;
	} else {
		cout << "[" << str1 << "]" << "は大きい" << endl;
	}
}
