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
	
	make_heap ( v1.begin(), v1.end(), comp );
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;

	v1.push_back( 100 );
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;

	push_heap( v1.begin(), v1.end(), comp );
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}
