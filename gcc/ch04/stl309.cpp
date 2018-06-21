#include <iostream>

using namespace std;

int main( void )
{
	bool b;

	b = true;
	cout << "bool 値: " << b << endl;
	b = true;
	cout << "bool 値: " << boolalpha << b << endl;
	b = false;
	cout << "bool 値: " << boolalpha << b << endl;
}
