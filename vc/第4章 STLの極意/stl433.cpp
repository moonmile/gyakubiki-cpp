#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;

	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << "," ;
	}
	cout << endl;

	// �x�N�^ v1 ����l val ��T��
	val = 5;
	it = search_n ( v1.begin(), v1.end(), 1, val );
	cout << "v1 ���� val ��" << 
		((it == v1.end())? "������Ȃ�����": "��������") << endl;

	val = 99;
	it = search_n ( v1.begin(), v1.end(), 1, val );
	cout << "v1 ���� val ��" << 
		((it == v1.end())? "������Ȃ�����": "��������") << endl;
}	

