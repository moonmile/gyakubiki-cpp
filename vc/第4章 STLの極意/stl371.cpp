#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v0(10);
	int i;
	
	for ( i=0; i<v0.size(); i++ ) {
		v0[i] = i;
	}
	for ( i=0; i<v0.size(); i++ ) {
		cout << v0[i] << ",";
	}
	cout << endl;
	
	// �U�Ԗڂ̗v�f���폜
	vector <int> v1( v0 );
	vector <int>::iterator it;
	it = v1.begin() + 5;
	v1.erase( it );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	// �U�Ԗڂ���W�Ԗڂ̗v�f���폜
	// �i�I�[�̃C�e���[�^�͊܂܂Ȃ��j
	vector <int> v2( v0 );
	vector <int>::iterator first, last;
	first = v2.begin() + 5;
	last  = v2.begin() + 8;
	v2.erase( first, last );
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;

	// last �� end() ���w�肵���ꍇ
	vector <int> v3( v0 );
	first = v3.begin() + 5;
	last  = v3.end();
	v3.erase( first, last );
	for ( i=0; i<v3.size(); i++ ) {
		cout << v3[i] << ",";
	}
	cout << endl;
}
