#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
	}
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// ６番目に挿入
	v1.insert( v1.begin()+5, 10 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// 先頭に挿入
	v1.insert( v1.begin(), 11 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// 別のベクタを挿入
	vector <int> v2(5);
	for ( i=0; i<v2.size(); i++ ) {
		v2[i] = 90 + i;
	}
	v1.insert( v1.begin()+3, v2.begin(), v2.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
}
