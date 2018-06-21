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
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(5);
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	vector <int>::iterator it;
	// 連続した要素が見つかった場合
	it = adjacent_find( v1.begin(), v1.end(), comp );
	cout << "隣接した要素の値: " << *it << endl;
}	
