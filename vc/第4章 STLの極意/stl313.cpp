#include <iostream>
#include <iomanip>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

int main( void )
{
	double n = 100.123;

	cout << "double ’l: " << n << endl;
	cout << "double ’l: " << fixed << n << endl;
	cout << "double ’l: " << fixed  
	     << setprecision(3) << n << endl;

}
