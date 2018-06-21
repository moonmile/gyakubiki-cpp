#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10), v2(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v2.size(); i++ ) v2[i] = i - 5;
	
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: ";
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
	
	vector <int> v3( v1.size(), -1 );
	vector <int>::iterator it, j;
	
	it = set_intersection ( v1.begin(), v1.end(), 
	  v2.begin(), v2.end(), v3.begin() );
	v3.erase( it, v3.end() );
	cout << "v3: ";
	for ( j = v3.begin(); j != v3.end(); j++ ) {
		cout << *j << ",";
	}
	cout << endl;

	// ‚Ğ‚Æ‚Â‚àd•¡‚µ‚Ä‚¢‚È‚¢ê‡
	vector <int> v4(5,-1);
	cout << "v4: ";
	for ( i=0; i<v4.size(); i++ ) cout << v4[i] << ",";
	cout << endl;
	vector <int> v5( v1.size(), -1 );
	it = set_intersection ( v1.begin(), v1.end(), 
	  v4.begin(), v4.end(), v5.begin() );
	v5.erase( it, v5.end() );
	cout << "v5: ";
	for ( j = v5.begin(); j != v5.end() ; j++ ) {
		cout << *j << ",";
	}
	cout << endl;
	
	// ‚·‚×‚Ä‚ªd•¡‚µ‚Ä‚¢‚éê‡
	vector <int> v6( v1 );
	cout << "v6: ";
	for ( i=0; i<v6.size(); i++ ) cout << v6[i] << ",";
	cout << endl;
	vector <int> v7( v1.size(), -1 );
	it = set_intersection ( v1.begin(), v1.end(), 
	  v6.begin(), v6.end(), v7.begin() );
	v7.erase( it, v7.end() );
	cout << "v7: ";
	for ( j = v7.begin(); j != v7.end(); j++ ) {
		cout << *j << ",";
	}
	cout << endl;
}
