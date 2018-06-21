#include <iostream>
#include <iomanip>
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "int 値: [" << n << "]" << endl;
	cout << "int 値: [" << setprecision(5) << n << "]" << endl;
	cout << "int 値: [" << setprecision(3)  << n << "]" << endl;
	
	cout << setprecision(7);
	double x = 100.123;
	cout << "double 値: [" << x << "]" << endl;
	cout << "double 値: [" << setprecision(7) << x << "]" << endl;
	cout << "double 値: [" << setprecision(4) << x << "]" << endl;
}
