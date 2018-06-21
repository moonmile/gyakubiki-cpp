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
	// ベクタ v1 から値 val を削除する
	replace_if ( v1.begin(), v1.end(), comp, -1 );
	for ( it = v1.begin(); it != v1.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

