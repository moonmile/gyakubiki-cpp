#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v(10);
	int i;
	// “Y‚¦Žš‚ðŽg‚¤
	for ( i=0; i<v.size(); i++ ) {
		v[i] = i;
	}
	for ( i=0; i<v.size(); i++ ) {
		cout << v[i] << ",";
	}
	cout << endl;
}
