#include <iostream>
#ifndef _MSC_VER
#error "this function in MS-VC only"
#endif
using namespace std;

int main( void )
{
	double n = 100.123;

	cout << "double ’l: " << n << endl;
	cout << "double ’l: " << fixed << n << endl;
	cout << "double ’l: " << scientific << n << endl;
}
