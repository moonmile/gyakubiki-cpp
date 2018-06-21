#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <char> v;
	int i;
	
	v.push_back( 'A' );
	v.push_back( 'B' );
	v.push_back( 'C' );

	do {
		for ( i=0; i<v.size(); i++ ) cout << v[i] ;
		cout << endl;
	} while ( next_permutation( v.begin(), v.end() ));
}
