#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	multimap <char, int> m1;
	int i;
	for ( i=0; i<5; i++ ) {
		m1.insert( pair <char, int> ('A'+i, i) );
	}
	
	multimap <char, int>::iterator p;
	cout << "�}���O" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
	
	m1.insert( pair<char, int>('C', 10) );
	// multimap �̏ꍇ�͏d�������L�[�������̂ŁA�P�}�������B
	cout << "�}����" << endl;
	for ( p = m1.begin(); p != m1.end(); p++ ) {
		cout << "key: " << p->first << " " << "val: " << p->second << endl;
	}	
}
