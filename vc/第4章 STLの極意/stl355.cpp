#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// �P�������o�͂���
	for ( string::reverse_iterator i=str1.rbegin(); i != str1.rend(); i++ ) {
		cout << "[" << *i << "]" ;
	}
	cout << endl;
}
