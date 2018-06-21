#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list <int> lst(5);
	
	cout << "size: " << lst.size() << endl;
	lst.clear();
	cout << "size: " << lst.size() << endl;
	lst.push_back('C');
	lst.push_back('+');
	lst.push_back('+');
	cout << "size: " << lst.size() << endl;
}
