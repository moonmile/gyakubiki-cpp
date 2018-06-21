#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func( int x )
{
	return x * x;
}

int func2( int x, int y )
{ 
	return x + y;
}

int main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	cout << "v1: ";
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	
	vector <int> v2( v1.size() );
	transform ( v1.begin(), v1.end(), v2.begin(), func );
	cout << "v2: ";
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;

	vector <int> v3( v1.size() );
	transform ( v1.begin(), v1.end(), v2.begin(), v3.begin(), func2 );
	cout << "v3: ";
	for ( i=0; i<v3.size(); i++ ) cout << v3[i] << ",";
	cout << endl;
}

