#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	// ‰Šú‰»‚·‚é
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	random_shuffle( v1.begin(), v1.end() );
	v1.push_back( 5 );
	v1.push_back( 6 );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// ƒ\[ƒg‚·‚é
	stable_sort ( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	
