#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// ‚P•¶š‚¸‚Âo—Í‚·‚é
	string::iterator i = str1.end();
	do {
		i--;
		cout << "[" << *i << "]" ;
	} while ( i != str1.begin() ) ;
	cout << endl;
}
