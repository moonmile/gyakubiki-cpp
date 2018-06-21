#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello C++ world.");

	// １文字ずつ出力する
	for ( string::reverse_iterator i=str1.rbegin(); i != str1.rend(); i++ ) {
		cout << "[" << *i << "]" ;
	}
	cout << endl;
}
