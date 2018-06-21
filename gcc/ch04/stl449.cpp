#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
		cout << v1[i] << ",";
	}
	cout << endl;

	vector <int> v2(10);
	reverse_copy ( v1.begin(), v1.end(), v2.begin() );
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
}	

