#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
		cout << v1[i] << ",";
	}
	cout << endl;

	val = 5;
	it = find( v1.begin(), v1.end(), val );
	cout << "�v�f:" << val << " ��" <<
		((it != v1.end())? "��������": "������Ȃ�����") << endl;
	for ( vector <int>::iterator j = v1.begin(); j != v1.end(); j++ ) {
		if ( j == it ) {
			cout << "[" << *j << "],";
		} else {
			cout << *j << ",";
		}
	}
	cout << endl;
		
	val = 99;
	it = find( v1.begin(), v1.end(), val );
	cout << "�v�f:" << val << " ��" <<
		((it != v1.end())? "��������": "������Ȃ�����") << endl;
}
