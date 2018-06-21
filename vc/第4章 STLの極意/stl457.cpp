#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i, val;
	// ����������
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	// lower_bound ���g���O�� sort ���Ă����K�v������
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	
	vector <int>::iterator it;
	// �r���Ƀ}�b�`����ꍇ
	val = 5;
	it = lower_bound( v1.begin(), v1.end(), val );
	for ( ; it != v1.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;

	// �ő�l�ȏ�̏ꍇ
	val = 99;
	it = lower_bound( v1.begin(), v1.end(), val );
	cout << ((it != v1.end())? "�}�b�`����": "�}�b�`���Ȃ�����") << endl;
	for ( ; it != v1.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;

	// �ŏ��l�ȉ��̏ꍇ
	val = -1;
	it = lower_bound( v1.begin(), v1.end(), val );
	cout << ((it != v1.begin())? "�}�b�`����": "�}�b�`���Ȃ�����") << endl;
	for ( ; it != v1.end(); it++ ) {
		cout << *it << ",";
	}
	cout << endl;
}	
