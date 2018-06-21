#include <iostream>
#include <map>
#include <string>
using namespace std;

int main( void )
{
	map <char, int> m1, m2;
	m1['A'] = 1; m1['B'] = 2; m1['C'] = 3; 
	m2['A'] = 1; m2['b'] = 2; m2['C'] = 3; 
	
	if ( m1 > m2 ) {
		cout << "m1 は m2 より大きい" << endl;
	} else {
		cout << "m1 は m2 より小さい" << endl;
	}
	
	m2.erase('b');
	if ( m1 > m2 ) {
		cout << "m1 は m2 より大きい" << endl;
	} else {
		cout << "m1 は m2 より小さい" << endl;
	}
	
	m2['B'] = 0;
	if ( m1 > m2 ) {
		cout << "m1 は m2 より大きい" << endl;
	} else {
		cout << "m1 は m2 より小さい" << endl;
	}
}
