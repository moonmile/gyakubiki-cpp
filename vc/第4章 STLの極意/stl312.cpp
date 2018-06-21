#include <iostream>
#include <iomanip> // setfill, setw
using namespace std;

int main( void )
{
	int n = 1234;
	cout << "”’l: " << dec << n << endl;
	cout << "16i”: " << hex << n << endl;
	cout << "16i”: "
	     << "0x" << hex << setw(8) << setfill('0') << n << endl;
}
