#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i, val;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	// lower_bound を使う前に sort しておく必要がある
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	
	vector <int>::iterator it;
	// 途中にマッチする場合
	val = 5;
	it = lower_bound( v1.begin(), v1.end(), val );
	for ( ; it != v1.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;

	// 最大値以上の場合
	val = 99;
	it = lower_bound( v1.begin(), v1.end(), val );
	cout << ((it != v1.end())? "マッチした": "マッチしなかった") << endl;
	for ( ; it != v1.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;

	// 最小値以下の場合
	val = -1;
	it = lower_bound( v1.begin(), v1.end(), val );
	cout << ((it != v1.begin())? "マッチした": "マッチしなかった") << endl;
	for ( ; it != v1.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;
}	
