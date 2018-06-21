#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(5);
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	vector <int>::iterator it;
	// 連続した要素が見つかった場合
	it = adjacent_find( v1.begin(), v1.end());
	cout << "隣接した要素の値: " << *it << endl;
	
	vector <int> v2(10);
	for ( i=0; i<v2.size(); i++ ) v2[i] = i;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	// 連続した要素が見つからない場合
	it = adjacent_find( v2.begin(), v2.end());
	cout << "隣接した要素が" 
		<< ((it != v2.end())? "見つかった": "見つからなかった") << endl;
}	
