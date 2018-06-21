#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

void main( void )
{
	int i;
	// assign メソッドで初期化する
	vector <int> v1(10,0);
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;

	// at メソッドで設定
	for ( i=0; i<v1.size(); i++ ) {
		v1.at(i) = i;
	}
	// at メソッドで取得
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1.at(i) << "," ;
	}
	cout << endl;
	
	// 範囲外を指定すると例外が発生する
	try {
		cout << "範囲外["  << v1.at(100) << "]" << endl;
	} catch ( out_of_range e ) {
		cout << "例外が発生しました [" << e.what() << "]" << endl;
	}
}
