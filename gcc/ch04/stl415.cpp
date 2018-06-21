#include <iostream>
#include <map>
using namespace std;

int main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	char ch = 'C';
	
	// map の場合は重複したキーを許さないので、常に１つのペアのみ返す
	pair < map<char, int>::iterator, map<char, int>::iterator> pa;
	pa = m1.equal_range( ch );
	map<char, int>::iterator j;
	for (  j = pa.first; j != pa.second; j++ ) {
		cout << "map key: '" << j->first << "' " << j->second << endl;
	}
	// 見つからない場合	
	pa = m1.equal_range( '0' );
	if ( pa.first != m1.end() ) {
		cout << "map: not found" << endl;
	} else {
		cout << "map: found" << endl;
	}

	multimap<char, int> m2;
	for ( i=0; i<10; i++ ) m2.insert( pair <char, int> ('A'+i, i) );
	m2.insert(pair<char, int>('C',10));
	m2.insert(pair<char, int>('C',20));

	pair < multimap<char, int>::iterator, multimap<char, int>::iterator> pa2;
	pa2 = m2.equal_range( ch );
	multimap<char, int>::iterator k;
	for (  k = pa2.first; k != pa2.second; k++ ) {
		cout << "multimap key: '" << k->first << "' " << k->second << endl;
	}
	
	pa2 = m2.equal_range( '0' );
	if ( pa2.first == pa2.second ) {
		cout << "map: not found" << endl;
	} else {
		cout << "map: found" << endl;
	}
}
