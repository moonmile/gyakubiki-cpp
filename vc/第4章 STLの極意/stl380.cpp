#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i,j;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
	}
	for ( i=0; i<10; i++ ) {
		v1.pop_back();
		for ( j=0; j<v1.size(); j++ ) {
			cout << v1[j] << "," ;
		}
		cout << endl;
	}
	
	// ��̃x�N�^�ɑ΂��� pop_back ���\�b�h���Ăяo���Ă��悢
	v1.clear();
	v1.pop_back();
}
