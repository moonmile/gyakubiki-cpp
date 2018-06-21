#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int comp( int x, int y )
{
	if ( x < y ) {
		return true;
	} else {
		return false;
	}
}

int main( void )
{
	vector <int> v1(10), v2(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v2.size(); i++ ) v2[i] = i - 5;
	
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: ";
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
	
	vector <int> v3( v1.size(), -1 );
	vector <int>::iterator it, j;
	
	it = set_intersection ( v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), comp );
	v3.erase( it, v3.end() );
	cout << "v3: ";
	for ( j = v3.begin(); j != v3.end(); j++ ) {
		cout << *j << ",";
	}
	cout << endl;
}
