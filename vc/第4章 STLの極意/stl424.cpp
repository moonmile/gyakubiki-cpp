#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	char ch = 'C';
	
	// map ‚Ìê‡
	map<char, int>::iterator j;
	j = m1.upper_bound( ch );
	if ( j != m1.end() ) {
		cout << "Œ©‚Â‚©‚Á‚½ '" << ch << "'" << endl;
	} else {
		cout << "Œ©‚Â‚©‚ç‚È‚©‚Á‚½ '" << ch << "'" << endl;
	}

	ch = 'X';
	j = m1.upper_bound( ch );
	if ( j != m1.end() ) {
		cout << "Œ©‚Â‚©‚Á‚½ '" << ch << "'" << endl;
	} else {
		cout << "Œ©‚Â‚©‚ç‚È‚©‚Á‚½ '" << ch << "'" << endl;
	}
}
