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
	// v1 �����r�֐����g���Ēu������
	// ���̂Ƃ��R�s�[��� v2 �ɂȂ�
	vector <int> v2(10);
	replace_copy_if ( v1.begin(), v1.end(), v2.begin(), comp, 100 );
	for ( it = v2.begin(); it != v2.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

