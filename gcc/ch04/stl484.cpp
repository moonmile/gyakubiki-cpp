#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gene( void )
{
	return rand() % 10;
}


int main( void )
{
	vector <int> v(10);
	int i;
	
	generate ( v.begin(), v.end(), gene );

	for ( i=0; i<v.size(); i++ ) cout << v[i] << "," ;
	cout << endl;
}
