#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	vector <int> v2(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v2.size(); i++ ) v2[i] = 90+i;
	
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << " <-> ";
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	
	// 指定範囲だけ交換する
	swap_ranges( v2.begin(), v2.begin()+5, v1.begin() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << " <-> ";
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	
	// 全てを交換する
	swap_ranges( v2.begin(), v2.end(), v1.begin() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << " <-> ";
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
}	

