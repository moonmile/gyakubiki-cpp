#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	string str2;
	string str3("");
	
	cout << "[" << str1 << "] �� empty " <<
		(str1.empty()? "�ł�": "�ł͂���܂���") << endl;
	cout << "[" << str2 << "] �� empty " <<
		(str2.empty()? "�ł�": "�ł͂���܂���") << endl;
	cout << "[" << str3 << "] �� empty " <<
		(str3.empty()? "�ł�": "�ł͂���܂���") << endl;
}
