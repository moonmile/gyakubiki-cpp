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

int main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 から比較関数を使って置換する
	// このときコピー先は v2 になる
	vector <int> v2(10);
	replace_copy_if ( v1.begin(), v1.end(), v2.begin(), comp, 100 );
	for ( it = v2.begin(); it != v2.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

