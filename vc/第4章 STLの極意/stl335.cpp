#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");
	
	cout << "erase ‘O [" << str1 << "]" << endl;
	str1.erase();
	cout << "erase Œã [" << str1 << "]" << endl;
	
	str1 = "Hello world.";
	str1.erase( str1.begin() );
	cout << "Å‰‚Ì‚P•¶Žš‚ðíœ [" << str1 << "]" << endl;
	
	str1 = "Hello C++ world.";
	str1.erase( 6,3 );
	cout << "7•¶Žš–Ú‚©‚ç3•¶Žšíœ [" << str1 << "]" << endl;
	str1 = "Hello C++ world.";
	str1.erase( 6 );
	cout << "7•¶Žš–ÚˆÈ~‚ðíœ [" << str1 << "]" << endl;

	str1 = "Hello C++ world.";
	string::iterator first, last ;
	first = str1.begin() + 6;
	last = first + 3;
	str1.erase( first, last );
	cout << "7•¶Žš–Ú‚©‚ç3•¶Žšíœ [" << str1 << "]" << endl;
}
