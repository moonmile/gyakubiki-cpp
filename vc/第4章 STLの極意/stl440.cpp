#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// ����������
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// �v�f���ɂ��� i1 �� i2 �ɒu������
	// ���̂Ƃ��R�s�[��� v2 �ɂȂ�
	int i1 = 5; 
	int i2 = 0;
	vector <int> v2(10);
	replace_copy( v1.begin(), v1.end(), v2.begin(), i1, i2 );
	for ( it = v2.begin(); it != v2.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

