#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(5);
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	vector <int>::iterator it;
	// �A�������v�f�����������ꍇ
	it = adjacent_find( v1.begin(), v1.end());
	cout << "�אڂ����v�f�̒l: " << *it << endl;
	
	vector <int> v2(10);
	for ( i=0; i<v2.size(); i++ ) v2[i] = i;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	// �A�������v�f��������Ȃ��ꍇ
	it = adjacent_find( v2.begin(), v2.end());
	cout << "�אڂ����v�f��" 
		<< ((it != v2.end())? "��������": "������Ȃ�����") << endl;
}	
