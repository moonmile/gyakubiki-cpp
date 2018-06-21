#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v;

	cout << "capacity: " << v.capacity() << endl;
	v.push_back(1);
	cout << "capacity: " << v.capacity() << endl;
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	cout << "capacity: " << v.capacity() << endl;
	v.clear();
	cout << "capacity: " << v.capacity() << endl;
}
