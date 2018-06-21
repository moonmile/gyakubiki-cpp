#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	// •¶Žš—ñ‚ð‘}“ü
	string str1("Hello world.");
	cout << str1.insert(6, "C++ ") << endl;

	// 3•¶Žš‘}“ü
	string str2("Hello world.");
	str2.insert( 11, 3, '!' );
	cout << str2 << endl;

	string str3("Hello  world.");
	string::iterator it = str3.begin()+6;
	str3.insert( it, 'C' );
	cout << str3 << endl;
}
