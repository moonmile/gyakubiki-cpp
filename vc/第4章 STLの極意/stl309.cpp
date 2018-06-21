#include <iostream>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif

using namespace std;

void main( void )
{
	bool b;

	b = true;
	cout << "bool ’l: " << b << endl;
	b = true;
	cout << "bool ’l: " << boolalpha << b << endl;
	b = false;
	cout << "bool ’l: " << boolalpha << b << endl;
}
