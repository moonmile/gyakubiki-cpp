#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello C++ world.");

	// １文字ずつ出力する
	string::iterator i = str1.end();
	do {
		i--;
		cout << "[" << *i << "]" ;
	} while ( i != str1.begin() ) ;
	cout << endl;
}
