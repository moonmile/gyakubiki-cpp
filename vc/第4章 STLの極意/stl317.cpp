#include <iostream>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

int main( void )
{
	double n = 100.234;
	cout << "double �l: " << n << endl;
	cout << "double �l: " << showpoint << n << endl;
	cout << "double �l: " << noshowpoint << n << endl;

	n = 100.000;
	cout << "double �l: " << n << endl;
	cout << "double �l: " << showpoint << n << endl;
	cout << "double �l: " << noshowpoint << n << endl;
}
