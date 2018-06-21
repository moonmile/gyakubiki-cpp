#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
		cout << v1[i] << ",";
	}
	cout << endl;

	reverse ( v1.begin(), v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
}	

