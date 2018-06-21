#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i, val;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	pair < vector <int>::iterator, 
	       vector <int>::iterator > result;

	// ���ׂĂ̗v�f�������ꍇ
	vector <int> v2( v1 );
	result = mismatch ( v1.begin(), v1.end(), v2.begin() );
	if ( result.first == v1.end() && result.second == v2.end() ) {
		cout << "�v�f�����ׂē���" << endl;
	} else {
		cout << "�قȂ�v�f��������" 
			<< *(result.first) << "," << *(result.second) << endl;
	}

	// ���ׂĂ̗v�f�������ꍇ
	vector <int> v3( v1 );
	v3[5] = 99;
	result = mismatch ( v1.begin(), v1.end(), v3.begin() );
	if ( result.first == v1.end() && result.second == v2.end() ) {
		cout << "�v�f�����ׂē���" << endl;
	} else {
		cout << "�قȂ�v�f��������" 
			<< *(result.first) << "," << *(result.second) << endl;
	}
}	
