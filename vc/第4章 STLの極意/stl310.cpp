#include <iostream>
using namespace std;

int main( void )
{
	int n = 1234;

	cout << "int �l: " << n << endl;
	cout << "int �l: " << dec << n << endl;
	cout << "int �l: " << hex << n << endl;
	cout << "int �l: " << oct << n << endl;
	
	cout << dec << n << " " 
	     << "0x" << hex << n << " " 
	     << "0" << oct << n << endl;
}
