#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	
	for ( int i=0; i<v1.size(); i++ ) v1[i] = i;
	cout << "v1: " ;
	for ( int i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	
	cout << "v1: " ;
	for ( vector<int>::reverse_iterator x = v1.rbegin(); x != v1.rend(); x++ ) {
		cout << *x << "," ;
	}
	cout << endl;
}
