#include <iostream>
#include <map>
using namespace std;

int main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<5; i++ ) {
		m1.insert( pair <char, int> ('A'+i, i) );
	}
	
	map <char, int>::iterator p;
	cout << "挿入前" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
	
	// キーがないときは挿入される。
	m1[ 'X' ] = 99 ;
	cout << "挿入後" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	

	// 既にキーがあるときは値が置き換わる
	m1[ 'C' ] = 100 ;
	cout << "挿入後" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
}
