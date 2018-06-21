#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	
	for ( int i=0; i<v1.size(); i++ ) {
		v1[i] = i*i;
	}
	cout << "ÅŒã‚Ì—v‘f:" << v1.back() << endl;
}
