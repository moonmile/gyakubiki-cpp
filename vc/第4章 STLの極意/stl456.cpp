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
	// binary_search ���g���O�� sort ���Ă����K�v������
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// ��������
	val = 5;
	cout << "�v�f " << val << " �́A�x�N�^ v1 ����"
		<< ((binary_search( v1.begin(), v1.end(), val ) == true )?
			"��������": "������Ȃ�����") << endl;
	val = 99;
	cout << "�v�f " << val << " �́A�x�N�^ v1 ����"
		<< ((binary_search( v1.begin(), v1.end(), val ) == true )?
			"��������": "������Ȃ�����") << endl;
}	
