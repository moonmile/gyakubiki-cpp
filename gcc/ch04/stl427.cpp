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

	// 交換前
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	
	// スワップする
	vector <int>::iterator it1, it2;
	for ( it1 = v1.begin(), it2 = v2.begin(); it1 != v1.end(); it1++, it2++ ) {
		iter_swap ( it1, it2 );
	}
	
	// 交換後
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
}	
	
