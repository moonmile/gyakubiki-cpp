#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func( int x )
{
	cout << x << ",";
}


void main( void )
{
	vector <int> v(10);
	int i;

	for ( i=0; i<v.size(); i++ ) v[i] = i;
	for ( i=0; i<v.size(); i++ ) cout << v[i] << "," ;
	cout << endl;

	for_each ( v.begin(), v.end(), func );
	cout << endl;
}
