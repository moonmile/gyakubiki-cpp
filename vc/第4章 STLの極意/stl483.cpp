#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <char> v;
	int i;
	
	v.push_back( 'C' );
	v.push_back( 'B' );
	v.push_back( 'A' );

	do {
		for ( i=0; i<v.size(); i++ ) cout << v[i] ;
		cout << endl;
	} while ( prev_permutation( v.begin(), v.end() ));
}
