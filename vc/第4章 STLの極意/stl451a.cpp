#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ”äŠrŠÖ”
bool comp( int x, int y )
{
	if ( x > y ) {
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
	// ƒVƒƒƒbƒtƒ‹‚·‚é
	random_shuffle( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// 3”Ô–Ú‚Ì—v‘f‚ğ‘ÎÛ‚É‚·‚é
	vector <int>::iterator nth = v1.begin() + 3;
	cout << "”äŠr‘ÎÛ: " << *nth << endl;
	nth_element ( v1.begin(), nth, v1.end(), comp );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	
