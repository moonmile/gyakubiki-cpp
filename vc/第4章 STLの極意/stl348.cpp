#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("C++");
	string str2("Java");
	// string�^�Ŕ�r
	if ( str1 != str2 ) {
		cout << "������͈قȂ�" << endl;
	} else {
		cout << "������͓�����" << endl;
	}
	// char*�^�Ŕ�r
	if ( str1 != "Java" ) {
		cout << "������͈قȂ�" << endl;
	} else {
		cout << "������͓�����" << endl;
	}
}
