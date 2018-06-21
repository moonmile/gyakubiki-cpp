#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x, int y )
{
	if ( x == y ) {
		return true;
	} else {
		return false;
	}
}

int main( void )
{
	vector <int> v1(10);
	int i, val;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	pair < vector <int>::iterator, 
	       vector <int>::iterator > result;

	// 異なる要素がある場合
	vector <int> v3( v1 );
	v3[5] = 99;
	result = mismatch ( v1.begin(), v1.end(), v3.begin(), comp );
	if ( result.first == v1.end() && result.second == v3.end() ) {
		cout << "要素がすべて同じ" << endl;
	} else {
		cout << "異なる要素を見つけた" 
			<< *(result.first) << "," << *(result.second) << endl;
	}
}	
