#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// 初期化する
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// 要素中にある i1 を i2 に置換する
	// このときコピー先は v2 になる
	int i1 = 5; 
	int i2 = 0;
	vector <int> v2(10);
	replace_copy( v1.begin(), v1.end(), v2.begin(), i1, i2 );
	for ( it = v2.begin(); it != v2.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

