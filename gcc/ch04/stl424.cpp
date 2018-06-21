#include <iostream>
#include <map>
using namespace std;

int main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	char ch = 'C';
	
	// map の場合
	map<char, int>::iterator j;
	j = m1.upper_bound( ch );
	if ( j != m1.end() ) {
		cout << "見つかった '" << ch << "'" << endl;
	} else {
		cout << "見つからなかった '" << ch << "'" << endl;
	}

	ch = 'X';
	j = m1.upper_bound( ch );
	if ( j != m1.end() ) {
		cout << "見つかった '" << ch << "'" << endl;
	} else {
		cout << "見つからなかった '" << ch << "'" << endl;
	}
}
