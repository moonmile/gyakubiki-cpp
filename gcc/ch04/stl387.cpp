#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1;
	vector <int> v2(10);
	
	cout << "v1.size() = " << v1.size() << endl;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	cout << "v1.size() = " << v1.size() << endl;

	cout << "v2.size() = " << v2.size() << endl;
	v2.clear();
	cout << "v2.size() = " << v2.size() << endl;
}
