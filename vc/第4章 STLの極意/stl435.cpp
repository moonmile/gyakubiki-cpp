#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ”äŠrŠÖ”
bool comp( int x )
{
	if ( x < 5 ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// ‰Šú‰»‚·‚é
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 ‚©‚ç’l val ‚ğíœ‚·‚é
	it = remove_if ( v1.begin(), v1.end(), comp );
	cout << "íœ" << (( it != v1.end() )? "‚µ‚½": "‚µ‚È‚©‚Á‚½") << endl;
	v1.erase( it, v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	

