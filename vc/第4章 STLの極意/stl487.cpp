#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v(10);
	int i;

	for ( i=0; i<v.size(); i++ ) v[i] = i;
	v.push_back(5);
	for ( i=0; i<v.size(); i++ ) cout << v[i] << "," ;
	cout << endl;

	int n;
	n = count ( v.begin(), v.end(), 5 );
	cout << "5 �ɓ������v�f��: " << n << endl;
	
	n = count ( v.begin(), v.end(), 99 );
	cout << "99 �ɓ������v�f��: " << n << endl;
}
