#include <iostream>
#include <map>
using namespace std;

int main( void )
{
	// 要素数を指定しないコンストラクタ
	map <char, int> m1;
	int i;
	
	for ( i=0; i<10; i++ ) {
		m1.insert( pair <char, int> ('A'+i, i) );
	}
	
	char ch = 'C';
	map <char, int>::iterator p;
	p = m1.find( ch );
	if ( p == m1.end() ) {
		cout << "cannot find '" << ch << "'" << endl;
	} else {
		cout << "found in m1 '" << ch << "'" << endl;
	}
	
	// あらかじめ定義されたマップを使って生成
	map <char, int> m2( m1 );
	p = m2.find( ch );
	if ( p == m2.end() ) {
		cout << "cannot find '" << ch << "'" << endl;
	} else {
		cout << "found in m2 '" << ch << "'" << endl;
	}
	
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
}
