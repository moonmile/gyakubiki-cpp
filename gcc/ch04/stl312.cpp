#include <iostream>
#include <iomanip> // setfill, setw
using namespace std;

int main( void )
{
	int n = 1234;
	cout << "数値: " << dec << n << endl;
	cout << "16進数: " << hex << n << endl;
	cout << "16進数: "
	     << "0x" << hex << setw(8) << setfill('0') << n << endl;
}
