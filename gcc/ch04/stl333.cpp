#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	string str2;
	string str3("");
	
	cout << "[" << str1 << "] は empty " <<
		(str1.empty()? "です": "ではありません") << endl;
	cout << "[" << str2 << "] は empty " <<
		(str2.empty()? "です": "ではありません") << endl;
	cout << "[" << str3 << "] は empty " <<
		(str3.empty()? "です": "ではありません") << endl;
}
