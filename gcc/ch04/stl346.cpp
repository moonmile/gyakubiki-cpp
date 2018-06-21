#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string s;
	cout << "string::npos = " << string::npos << endl;
	cout << "s.npos       = " << s.npos << endl;
	cout << "s.max_size() = " << s.max_size() << endl;
	
	string str1("Hello C++ world.");
	if ( str1.find("Java") == string::npos ) {
		cout << "Java が見つかりませんでした" << endl;
	} else {
		cout << "Java が見つかりました" << endl;
	}
}
