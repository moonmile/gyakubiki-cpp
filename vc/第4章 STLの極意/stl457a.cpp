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

void main( void )
{
	vector <int> v1(10);
	int i, val;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	
	// lower_bound を使う前に sort しておく必要がある
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	vector <int>::iterator it;

	// 途中にマッチする場合
	val = 5;
	it = lower_bound( v1.begin(), v1.end(), val, comp );
	for ( vector <int>::iterator j=v1.begin(); j != it; j++ ) {
		cout << *j << ",";
	}
	cout << endl;
}	
