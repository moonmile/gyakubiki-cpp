#include <iostream>
#include <iomanip>
using namespace std;

int main( void )
{
	int n = 15;

	cout << "���l: " << n << endl;
	cout << "8�i��: " << oct << n << endl;
	cout << "8�i��: " << setw(3) << oct << n << endl;
	cout << "8�i��: " << setw(3) << setfill('0') << oct << n << endl;
}
