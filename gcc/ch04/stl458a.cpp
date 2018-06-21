#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x, int y )
{
	if ( x < y ) {
		return true;
	} else {
		return false;
	}
}

int main( void )
{
	vector <int> v1(10);
	int i, val;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	
	// upper_bound を使う前に sort しておく必要がある
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	vector <int>::iterator it1, it2;

	val = 5;
	it1 = lower_bound( v1.begin(), v1.end(), val, comp );
	it2 = upper_bound( v1.begin(), v1.end(), val, comp );
	for ( vector <int>::iterator j=it1; j != it2; j++ ) {
		cout << *j << ",";
	}
	cout << endl;
}	
