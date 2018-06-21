#include <iostream>
#include <map>
using namespace std;

int main( void )
{
	multimap <char, int> m1;
	int i;
	for ( i=0; i<5; i++ ) {
		m1.insert( pair <char, int> ('A'+i, i) );
	}
	
	multimap <char, int>::iterator p;
	cout << "挿入前" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
	
	m1.insert( pair<char, int>('C', 10) );
	// multimap の場合は重複したキーを許すので、１つ挿入される。
	cout << "挿入後" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
}
