#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 比較関数
bool comp( int x )
{
	if ( x < 5 ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 から比較関数で削除する
	// あらかじめコピー先の v2 を用意する
	vector <int> v2(10);
	it = remove_copy_if( v1.begin(), v1.end(), v2.begin(), comp );
	v2.erase( it, v2.end());
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
}	

