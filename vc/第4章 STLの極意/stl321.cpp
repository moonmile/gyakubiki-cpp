#include <iostream>
#include <iomanip>
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "int �l: [" << n << "]" << endl;
	cout << "int �l: [" << setprecision(5) << n << "]" << endl;
	cout << "int �l: [" << setprecision(3)  << n << "]" << endl;
	
	cout << setprecision(7);
	double x = 100.123;
	cout << "double �l: [" << x << "]" << endl;
	cout << "double �l: [" << setprecision(7) << x << "]" << endl;
	cout << "double �l: [" << setprecision(4) << x << "]" << endl;
}
