#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<5; i++ ) {
		m1.insert( pair <char, int> ('A'+i, i) );
	}
	
	map <char, int>::iterator p;
	cout << "‘}“ü‘O" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
	
	// ƒL[‚ª‚È‚¢‚Æ‚«‚Í‘}“ü‚³‚ê‚éB
	m1[ 'X' ] = 99 ;
	cout << "‘}“üŒã" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	

	// Šù‚ÉƒL[‚ª‚ ‚é‚Æ‚«‚Í’l‚ª’u‚«Š·‚í‚é
	m1[ 'C' ] = 100 ;
	cout << "‘}“üŒã" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
}
