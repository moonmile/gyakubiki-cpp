#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x )
{
	if ( x % 2 == 0 ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v(10);
	int i;

	for ( i=0; i<v.size(); i++ ) v[i] = i;
	for ( i=0; i<v.size(); i++ ) cout << v[i] << "," ;
	cout << endl;

	int n;
	n = count_if ( v.begin(), v.end(), comp );
	cout << "‹ô”‚Ì”: " << n << endl;
}
