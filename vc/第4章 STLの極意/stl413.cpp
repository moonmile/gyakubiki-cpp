#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	
	char ch = 'C';
	cout << "key '" << ch << "' �̗v�f��: " << m1.count( ch ) << endl;
	// map �ł͏d�������v�f�͂Ȃ��̂ŏ�ɂP�ɂȂ�
	m1.insert(pair<char, int>('C',3));
	cout << "key '" << ch << "' �̗v�f��: " << m1.count( ch ) << endl;
	
	
	// multimap �̏ꍇ�́A�d���������̂ŗv�f�����Ԃ�
	multimap<char, int> m2;
	for ( i=0; i<10; i++ ) m2.insert( pair <char, int> ('A'+i, i) );

	cout << "key '" << ch << "' �̗v�f��: " << m2.count( ch ) << endl;
	m2.insert(pair<char, int>('C',3));
	cout << "key '" << ch << "' �̗v�f��: " << m2.count( ch ) << endl;
	
}
