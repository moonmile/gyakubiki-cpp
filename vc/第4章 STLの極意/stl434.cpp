#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	// ����������
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 ����l val ���폜����
	val = 5;
	it = remove ( v1.begin(), v1.end(), val );
	cout << "�폜" << (( it != v1.end() )? "����": "���Ȃ�����") << endl;
	v1.erase( it, v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 ����l val ���폜����
	val = 99;
	it = remove ( v1.begin(), v1.end(), val );
	cout << "�폜" << (( it != v1.end() )? "����": "���Ȃ�����") << endl;
	v1.erase( it, v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
}	

