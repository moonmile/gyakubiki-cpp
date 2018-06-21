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

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	random_shuffle ( v1.begin(), v1.end() );
	
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	
	vector <int>::iterator it;
	it = min_element( v1.begin(), v1.end() );
	cout << "min: " << *it << endl;
	
	it = min_element( v1.begin(), v1.end(), comp );
	cout << "min: " << *it << endl;
}
