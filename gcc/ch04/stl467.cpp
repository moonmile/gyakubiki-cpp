#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10), v2(8);
	int i;
	
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v2.size(); i++ ) v2[i] = i+1;
	sort ( v1.begin(), v1.end() );
	sort ( v2.begin(), v2.end() );
	
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	
	vector <int> v3( v1.size()+v2.size() );
	merge ( v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin() );
	for ( i=0; i<v3.size(); i++ ) {
		cout << v3[i] << "," ;
	}
	cout << endl;
}	
