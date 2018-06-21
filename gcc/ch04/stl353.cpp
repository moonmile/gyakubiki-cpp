#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello ");
	string str2("world.");
	
	cout << str1 << endl;
	str1 += "C++ ";
	cout << str1 << endl;
	str1 += str2;
	cout << str1 << endl;
	str1 += '!';
	cout << str1 << endl;
}
