#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	int i;
	// assign ���\�b�h�ŏ���������
	vector <int> v1;
	v1.assign( 10, 1 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;

	// �C�e���[�^���g���ď���������
	vector <int> v2;
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = 10-i;
	}
	v2.assign( v1.begin(), v1.end() );
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << "," ;
	}
	cout << endl;
}
