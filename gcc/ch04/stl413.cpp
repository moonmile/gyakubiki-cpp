#include <iostream>
#include <map>
using namespace std;

int main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	
	char ch = 'C';
	cout << "key '" << ch << "' の要素数: " << m1.count( ch ) << endl;
	// map では重複した要素はないので常に１になる
	m1.insert(pair<char, int>('C',3));
	cout << "key '" << ch << "' の要素数: " << m1.count( ch ) << endl;
	
	
	// multimap の場合は、重複を許すので要素数が返る
	multimap<char, int> m2;
	for ( i=0; i<10; i++ ) m2.insert( pair <char, int> ('A'+i, i) );

	cout << "key '" << ch << "' の要素数: " << m2.count( ch ) << endl;
	m2.insert(pair<char, int>('C',3));
	cout << "key '" << ch << "' の要素数: " << m2.count( ch ) << endl;
	
}
