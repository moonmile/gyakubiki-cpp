#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 から値 val を削除する
	val = 5;
	it = remove ( v1.begin(), v1.end(), val );
	cout << "削除" << (( it != v1.end() )? "した": "しなかった") << endl;
	v1.erase( it, v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 から値 val を削除する
	val = 99;
	it = remove ( v1.begin(), v1.end(), val );
	cout << "削除" << (( it != v1.end() )? "した": "しなかった") << endl;
	v1.erase( it, v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	

