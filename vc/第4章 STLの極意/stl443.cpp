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
	v1.push_back( 5 );
	v1.push_back( 6 );
	// unique ���g���O�Ƀ\�[�g����K�v������
	sort( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	
	vector <int> v2(10);
	it = unique_copy( v1.begin(), v1.end(), v2.begin() );
	v2.erase( it, v2.end() );
	for ( it = v2.begin(); it != v2.end(); ++it ) cout << *it << ",";
	cout << endl;
}	
