#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("C++");
	string str2("Java");
	if ( str1 > str2 ) {
		cout << "[" << str1 << "]" << "‚Í‘å‚«‚¢" << endl;
	} else {
		cout << "[" << str1 << "]" << "‚Í¬‚³‚¢" << endl;
	}
	// “™‚µ‚¢ê‡
	if ( str1 < "C++" ) {
		cout << "[" << str1 << "]" << "‚Í¬‚³‚¢" << endl;
	} else {
		cout << "[" << str1 << "]" << "‚Í‘å‚«‚¢" << endl;
	}
}
