#include <iostream>
#include <map>
using namespace std;

void main( void )
{
	map <char, int> m1;
	int i;
	for ( i=0; i<10; i++ ) m1.insert( pair <char, int> ('A'+i, i) );
	char ch = 'C';
	
	// map �̏ꍇ�͏d�������L�[�������Ȃ��̂ŁA��ɂP�̃y�A�̂ݕԂ�
	map<char, int>::iterator j;
	j = m1.find( ch );
	if ( j != m1.end() ) {
		cout << "�������� '" << ch << "'" << endl;
	} else {
		cout << "������Ȃ����� '" << ch << "'" << endl;
	}
	
	ch = 'X';
	j = m1.find( ch );
	if ( j != m1.end() ) {
		cout << "�������� '" << ch << "'" << endl;
	} else {
		cout << "������Ȃ����� '" << ch << "'" << endl;
	}
}
