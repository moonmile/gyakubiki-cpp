#include <iostream>
#include <iomanip>
using namespace std;

int main( void )
{
	double n = 100.123;

	cout << "double 値: " << n << endl;
	cout << "double 値: " << fixed << n << endl;
	cout << "double 値: " << fixed  
	     << setprecision(3) << n << endl;

}
