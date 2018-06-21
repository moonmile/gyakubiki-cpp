#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	string str2;
	string str3("");
	
	cout << "[" << str1 << "] ‚Í empty " <<
		(str1.empty()? "‚Å‚·": "‚Å‚Í‚ ‚è‚Ü‚¹‚ñ") << endl;
	cout << "[" << str2 << "] ‚Í empty " <<
		(str2.empty()? "‚Å‚·": "‚Å‚Í‚ ‚è‚Ü‚¹‚ñ") << endl;
	cout << "[" << str3 << "] ‚Í empty " <<
		(str3.empty()? "‚Å‚·": "‚Å‚Í‚ ‚è‚Ü‚¹‚ñ") << endl;
}
