#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int val, i;
	vector <int>::iterator it;
	// ‰Šú‰»‚·‚é
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 ‚©‚ç’l val ‚ğíœ‚·‚é
	vector <int> v2(10);
	val = 5;
	it = remove_copy( v1.begin(), v1.end(), v2.begin() , val );
	v2.erase( it, v2.end());
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
}	

