#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	vector <int> v2(3);
	vector <int>::iterator it;
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v2[0] = 3;
	v2[1] = 4;
	v2[2] = 5;

	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << "," ;
	}
	cout << endl;
	

	// ベクタ v1 からベクタ v2 を探す
	it = search ( v1.begin(), v1.end(), v2.begin(), v2.end() );
	cout << "v1 内に v2 が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;

	v2[0] = 3;
	v2[1] = 4;
	v2[2] = 100;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << "," ;
	}
	cout << endl;
	it = search ( v1.begin(), v1.end(), v2.begin(), v2.end() );
	cout << "v1 内に v2 が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;
}	

