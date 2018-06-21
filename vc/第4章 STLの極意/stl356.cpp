#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// ‚P•¶š‚¸‚Âo—Í‚·‚é
	string::reverse_iterator i = str1.rend();
	do {
		i--;
		cout << "[" << *i << "]" ;
	} while ( i != str1.rbegin() ) ;
	cout << endl;
}
