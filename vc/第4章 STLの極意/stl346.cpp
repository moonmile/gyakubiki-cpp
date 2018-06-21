#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string s;
	cout << "string::npos = " << string::npos << endl;
	cout << "s.npos       = " << s.npos << endl;
	cout << "s.max_size() = " << s.max_size() << endl;
	
	string str1("Hello C++ world.");
	if ( str1.find("Java") == string::npos ) {
		cout << "Java ‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½" << endl;
	} else {
		cout << "Java ‚ªŒ©‚Â‚©‚è‚Ü‚µ‚½" << endl;
	}
}
