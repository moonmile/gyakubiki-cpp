#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

void main( void )
{
	int i;
	// assign ���\�b�h�ŏ���������
	vector <int> v1(10,0);
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;

	// at ���\�b�h�Őݒ�
	for ( i=0; i<v1.size(); i++ ) {
		v1.at(i) = i;
	}
	// at ���\�b�h�Ŏ擾
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1.at(i) << "," ;
	}
	cout << endl;
	
	// �͈͊O���w�肷��Ɨ�O����������
	try {
		cout << "�͈͊O["  << v1.at(100) << "]" << endl;
	} catch ( out_of_range e ) {
		cout << "��O���������܂��� [" << e.what() << "]" << endl;
	}
}
