#include <iostream>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

int main( void )
{
	double n = 100.234;
	cout << "double 値: " << n << endl;
	cout << "double 値: " << showpoint << n << endl;
	cout << "double 値: " << noshowpoint << n << endl;

	n = 100.000;
	cout << "double 値: " << n << endl;
	cout << "double 値: " << showpoint << n << endl;
	cout << "double 値: " << noshowpoint << n << endl;
}
