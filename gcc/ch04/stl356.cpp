#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello C++ world.");

	// １文字ずつ出力する
	string::reverse_iterator i = str1.rend();
	do {
		i--;
		cout << "[" << *i << "]" ;
	} while ( i != str1.rbegin() ) ;
	cout << endl;
}
