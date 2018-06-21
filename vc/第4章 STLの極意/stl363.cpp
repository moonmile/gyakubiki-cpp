#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	int i;
	
	// 通常のコンストラクタ
	vector <int> v1;
	for ( i=0; i<10; i++ ) {
		v1.push_back(i);
	}
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// あらかじめサイズを指定するコンストラクタ
	vector <int> v2(10);
	for ( i=0; i<v2.size(); i++ ) {
		v2[i] = i;
	}
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << "," ;
	}
	cout << endl;
	
	// サイズと初期化を行うコンストラクタ
	vector <int> v3(10,3);
	for ( i=0; i<v3.size(); i++ ) {
		cout << v3[i] << "," ;
	}
	cout << endl;
	
	// 他のベクタからコピーするコンストラクタ
	vector <int> v4( v1 );
	for ( i=0; i<v4.size(); i++ ) {
		cout << v4[i] << "," ;
	}
	cout << endl;
	
	// 他のベクタから部分コピーするコンストラクタ
	vector <int> v5( v1.begin(), v1.end() );
	for ( i=0; i<v5.size(); i++ ) {
		cout << v5[i] << "," ;
	}
	cout << endl;
}
