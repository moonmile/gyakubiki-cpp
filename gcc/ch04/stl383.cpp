#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v;

	cout << "capacity: " << v.capacity() << endl;
	
	v.push_back(1);
	cout << "capacity: " << v.capacity() << endl;

	v.reserve( 100 );
	cout << "capacity: " << v.capacity() << endl;
}
