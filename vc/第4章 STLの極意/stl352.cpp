#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello ");
	string str2("world.");
	
	string s = str1 + "C++" + ' ' + str2 ;
	cout << s << endl;
}
