#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ”äŠrŠÖ”
bool comp( int x )
{
	if ( x % 2 ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	int i;
	// ‰Šú‰»‚·‚é
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// ®—ñ‚·‚é
	vector <int>::iterator it;
	it = partition ( v1.begin(), v1.end(), comp );
	v1.erase( it, v1.end() );
	for ( it = v1.begin(); it != v1.end(); ++it ) cout << *it << ",";
	cout << endl;
}	
