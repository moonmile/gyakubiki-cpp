#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	int val, i;
	vector <int>::iterator it;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 から値 val を削除する
	vector <int> v2(10);
	val = 5;
	it = remove_copy( v1.begin(), v1.end(), v2.begin() , val );
	v2.erase( it, v2.end());
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
}	

