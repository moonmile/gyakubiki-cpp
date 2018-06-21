#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	
	for ( int i=0; i<v1.size(); i++ ) {
		v1[i] = i*i;
	}
	cout << "最後の要素:" << v1.back() << endl;
}
