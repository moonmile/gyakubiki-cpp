#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;

	// fill �O
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	// �擪�̗v�f������ݒ肷��
	fill( v1.begin(), v1.begin()+1, 99 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	// ����͈̔͂�ݒ肷��
	fill( v1.begin(), v1.begin()+5, 99 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
		
	// �v�f�S�̂�ݒ肷��
	fill( v1.begin(), v1.end(), 99 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
}	
