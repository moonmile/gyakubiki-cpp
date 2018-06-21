#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	string str2, str3;
	
	cout << str1 << endl;
	str2 = str1;
	str2.replace(5,1, " C++ " );
	cout << str2 << endl;
	str2 = str1;
	str2.replace(5,1, " C++ ", 2 );
	cout << str2 << endl;
	str2 = str1; str3 = " C/C++ ";
	str2.replace(5,1, str3 );
	cout << str2 << endl;
	
	string::iterator i;
	str2 = str1;
	i = str2.begin(); i += 5;
	str2.replace( str2.begin(), i, "HELLO" );
	cout << str2 << endl;
	str2 = str1;
	i = str2.begin(); i += 6;
	str2.replace( i, str2.end(), "WORLD." );
	cout << str2 << endl;
}
