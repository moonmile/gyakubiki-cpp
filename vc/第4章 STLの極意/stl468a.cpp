#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x, int y )
{
	if ( x < y ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<5; i++ ) v1[i] = i;
	for ( i=0; i<5; i++ ) v1[i+5] = i+1;
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	inplace_merge ( v1.begin(), v1.begin()+5, v1.end(), comp );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
}	
