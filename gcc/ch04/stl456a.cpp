#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int comp( int x, int y )
{
	if ( x < y ) return -1;
	if ( x > y ) return 1;
	return 0;
}

int main( void )
{
	vector <int> v1(10);
	int i, val;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	// binary_search を使う前に sort しておく必要がある
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// 検索する
	val = 5;
	cout << "要素 " << val << " は、ベクタ v1 内に"
		<< ((binary_search( v1.begin(), v1.end(), val, comp ) == true )?
			"見つかった": "見つからなかった") << endl;
	val = 99;
	cout << "要素 " << val << " は、ベクタ v1 内に"
		<< ((binary_search( v1.begin(), v1.end(), val, comp ) == true )?
			"見つかった": "見つからなかった") << endl;
}	
