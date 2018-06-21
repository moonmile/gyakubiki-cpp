#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 比較関数
bool comp( int x, int y )
{
	if ( x > y ) {
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
	// シャッフルする
	random_shuffle( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// 3番目の要素を対象にする
	vector <int>::iterator nth = v1.begin() + 3;
	cout << "比較対象: " << *nth << endl;
	nth_element ( v1.begin(), nth, v1.end(), comp );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	
