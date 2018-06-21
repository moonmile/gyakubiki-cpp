#include <iostream>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "int 値: " << n << endl;
	cout << "int 値: " << showpos << n << endl;

	n = -1234;
	cout << "int 値: " << n << endl;
	cout << "int 値: " << showpos << n << endl;
}
