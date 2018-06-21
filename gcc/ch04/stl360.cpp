#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	string str2("C++");
	
	cout << "[" << str1 << "][" << str2 << "]" << endl;
	str1.swap( str2 );
	cout << "[" << str1 << "][" << str2 << "]" << endl;
	str2.swap( str1 );
	cout << "[" << str1 << "][" << str2 << "]" << endl;
}
