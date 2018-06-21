#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;

	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;

	// ベクタ v1 から値 val を探す
	val = 5;
	it = search_n ( v1.begin(), v1.end(), 1, val );
	cout << "v1 内に val が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;

	val = 99;
	it = search_n ( v1.begin(), v1.end(), 1, val );
	cout << "v1 内に val が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;
}	

