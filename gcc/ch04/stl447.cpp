#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 比較関数
bool comp( int x )
{
	if ( x % 2 ) {
		return true;
	} else {
		return false;
	}
}

int main( void )
{
	vector <int> v1(10);
	int i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// 整列する
	vector <int>::iterator it;
	it = partition ( v1.begin(), v1.end(), comp );
	v1.erase( it, v1.end() );
	for ( it = v1.begin(); it != v1.end(); ++it ) cout << *it << ",";
	cout << endl;
}	
