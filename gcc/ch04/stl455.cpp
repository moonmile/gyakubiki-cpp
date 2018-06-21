#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10), v2(10,0);
	int i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	random_shuffle( v1.begin(), v1.end() );
	// 初期表示
	cout << "v1: " ;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: " ;
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
	// v1 を部分ソートして v2 にコピーする
	partial_sort_copy ( v1.begin(), v1.end(), v2.begin(), v2.end() );
	cout << "v1: " ;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: " ;
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
}	
