#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
	}
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// ‚U”Ô–Ú‚É‘}“ü
	v1.insert( v1.begin()+5, 10 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// æ“ª‚É‘}“ü
	v1.insert( v1.begin(), 11 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
	
	// •Ê‚ÌƒxƒNƒ^‚ð‘}“ü
	vector <int> v2(5);
	for ( i=0; i<v2.size(); i++ ) {
		v2[i] = 90 + i;
	}
	v1.insert( v1.begin()+3, v2.begin(), v2.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;
}
