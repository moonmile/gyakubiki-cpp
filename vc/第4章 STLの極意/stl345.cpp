#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string s;
	cout << "string::npos = " << string::npos << endl;
	cout << "s.npos       = " << s.npos << endl;
	cout << "s.max_size() = " << s.max_size() << endl;
}
