#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int i;
	// ‰Šú‰»‚·‚é
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	// —v‘f’†‚É‚ ‚é i1 ‚ğ i2 ‚É’uŠ·‚·‚é
	int i1 = 5; 
	int i2 = 0;
	replace ( v1.begin(), v1.end(), i1, i2 );
	for ( it = v1.begin(); it != v1.end(); ++it ) cout << *it << ",";
	cout << endl;
}	

