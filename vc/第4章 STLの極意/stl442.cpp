#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back( 5 );
	v1.push_back( 6 );
	// unique を使う前にソートする必要がある
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;

	it = unique ( v1.begin(), v1.end() );
	v1.erase( it, v1.end() );
	for ( it = v1.begin(); it != v1.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

