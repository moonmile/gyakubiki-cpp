#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v0(10);
	int i;
	
	for ( i=0; i<v0.size(); i++ ) {
		v0[i] = i;
	}
	for ( i=0; i<v0.size(); i++ ) {
		cout << v0[i] << ",";
	}
	cout << endl;
	
	// ６番目の要素を削除
	vector <int> v1( v0 );
	vector <int>::iterator it;
	it = v1.begin() + 5;
	v1.erase( it );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	// ６番目から８番目の要素を削除
	// （終端のイテレータは含まない）
	vector <int> v2( v0 );
	vector <int>::iterator first, last;
	first = v2.begin() + 5;
	last  = v2.begin() + 8;
	v2.erase( first, last );
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;

	// last に end() を指定した場合
	vector <int> v3( v0 );
	first = v3.begin() + 5;
	last  = v3.end();
	v3.erase( first, last );
	for ( i=0; i<v3.size(); i++ ) {
		cout << v3[i] << ",";
	}
	cout << endl;
}
