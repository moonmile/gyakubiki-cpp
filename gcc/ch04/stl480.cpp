#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int comp( int x, int y )
{
	if ( x < y ) {
		return true;
	} else {
		return false;
	}
}

int main( void )
{
	int x, y;
	x = 10; y = 20;

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "max: " << min( x, y ) << endl;

	cout << "x: " << x << endl;
	cout << "n: " << 0 << endl;
	cout << "min: " << min( x, 0 ) << endl;

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "min: " << min( x, y, comp ) << endl;
}
