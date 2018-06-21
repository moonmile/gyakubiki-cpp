#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

void main( void )
{
	// 異なるコンテナを使って swap_ranges する
	vector<char> vec;
	list<char> lst;
	int i;
	
	for ( i=0; i<10; i++ ) vec.push_back( 'A'+i );
	for ( i=0; i<10; i++ ) lst.push_back( 'a'+i );
	
	for ( i=0; i<vec.size(); i++ ) {
		cout << vec[i] << ",";
	}
	cout << " <-> ";
	for ( list<char>::iterator it = lst.begin(); it != lst.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;
	
	// 全てを交換する
	swap_ranges( lst.begin(), lst.end(), vec.begin() );
	for ( i=0; i<vec.size(); i++ ) {
		cout << vec[i] << ",";
	}
	cout << " <-> ";
	for ( list<char>::iterator it = lst.begin(); it != lst.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;
}	

