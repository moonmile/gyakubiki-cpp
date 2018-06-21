#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v;
	int i;
	
	for ( i=0; i<10; i++ ) v.push_back(i);
	cout << "v: " ;
	for ( i=0; i<v.size(); i++ ) cout << v[i] << ",";
	cout << endl;
	
	v.resize( 5 );
	cout << "v: " ;
	for ( i=0; i<v.size(); i++ ) cout << v[i] << ",";
	cout << endl;
	
	v.resize( 15 );
	cout << "v: " ;
	for ( i=0; i<v.size(); i++ ) cout << v[i] << ",";
	cout << endl;
}
