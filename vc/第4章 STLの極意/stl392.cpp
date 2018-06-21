#include <iostream>
#include <list>
using namespace std;

class Base {
};

void main( void )
{
	list <int> lst(5);
	
	cout << "count: " << lst.size() << endl;
	lst.clear();
	cout << "count: " << lst.size() << endl;
	lst.push_back(1);
	cout << "count: " << lst.size() << endl;
}
