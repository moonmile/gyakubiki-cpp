#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v;
	cout << "v.size()    : " << v.size() << endl;
	cout << "v.max_size(): " << v.max_size() << endl;
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	cout << "v.size()    : " << v.size() << endl;
	cout << "v.max_size(): " << v.max_size() << endl;
}
