#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	// ����������
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	// �V���b�t������
	random_shuffle( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// �R�Ԗڂ̗v�f��Ώۂɂ���
	vector <int>::iterator nth = v1.begin() + 3;
	cout << "��r�Ώ�: " << *nth << endl;
	nth_element ( v1.begin(), nth, v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	
