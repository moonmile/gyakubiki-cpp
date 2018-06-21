#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	multimap <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	m1.insert( pair <char, int> ( 'C', 10 ));
	m1.insert( pair <char, int> ( 'C', 20 ));
	
	char ch = 'C';

	// multimap �̏ꍇ
	multimap<char, int>::iterator j1, j2;
	j1 = m1.lower_bound( ch );
	j2 = m1.upper_bound( ch );
	if ( j1 == m1.end() || j2 == m1.end() ) {
		cout << "������Ȃ����� '" << ch << "'" << endl;
	} else {
		multimap <char, int>::iterator j;
		for ( j = j1; j != j2; j++ ) {
			cout << "key: '" << j->first << "' " << j->second << endl;
		}
	}
}
