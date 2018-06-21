#include <iostream>
using namespace std;

int main( void )
{
	int n = 1234;

	cout << "int 値: " << n << endl;
	cout << "int 値: " << dec << n << endl;
	cout << "int 値: " << hex << n << endl;
	cout << "int 値: " << oct << n << endl;
	
	cout << dec << n << " " 
	     << "0x" << hex << n << " " 
	     << "0" << oct << n << endl;
}
