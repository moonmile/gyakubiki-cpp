#include <iostream>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "int �l: " << n << endl;
	cout << "int �l: " << showpos << n << endl;

	n = -1234;
	cout << "int �l: " << n << endl;
	cout << "int �l: " << showpos << n << endl;
}
