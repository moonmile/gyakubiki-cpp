#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ��r�֐�
bool comp( int x )
{
	if ( x < 5 ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// ����������
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// v1 �����r�֐��ō폜����
	// ���炩���߃R�s�[��� v2 ��p�ӂ���
	vector <int> v2(10);
	it = remove_copy_if( v1.begin(), v1.end(), v2.begin(), comp );
	v2.erase( it, v2.end());
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
}	

