#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(10), v2(10);
	
	for ( int i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( int i=0; i<v1.size(); i++ ) v2[i] = i+5;
	cout << "v1: " ;
	for ( int i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: " ;
	for ( int i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
	
	v1.swap( v2 );
	cout << "v1: " ;
	for ( int i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: " ;
	for ( int i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
}
