#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	string str2("Hello world.");
	// string�^�Ŕ�r	
	if ( str1 == str2 ) {
		cout << "������͓�����" << endl;
	} else {
		cout << "������͈قȂ�" << endl;
	}
	// char*�^�Ŕ�r
	if ( str1 == "Hello world." ) {
		cout << "������͓�����" << endl;
	} else {
		cout << "������͈قȂ�" << endl;
	}
}
