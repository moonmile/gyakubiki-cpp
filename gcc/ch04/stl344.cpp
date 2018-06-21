#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	cout << "[" << str1 << "] 文字数は " << str1.length() << endl;
	string str2("");
	cout << "[" << str2 << "] 文字数は " << str2.length() << endl;
	string str3;
	cout << "[" << str3 << "] 文字数は " << str3.length() << endl;
}
