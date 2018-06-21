#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x, int y )
{
	if ( x == y ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	int i, val;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(5);
	v1.push_back(6);
	
	// equal_range を使う前に sort しておく必要がある
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	pair < vector <int>::iterator, 
	       vector <int>::iterator > result;

	val = 5;
	result = equal_range( v1.begin(), v1.end(), val, comp );
	for ( vector <int>::iterator j = result.first; j != result.second; j++ ) {
		cout << *j << ",";
	}
	cout << endl;
}	
