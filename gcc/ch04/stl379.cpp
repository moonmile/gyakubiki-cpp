#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1;
	int i,j;
	
	for ( i=0; i<10; i++ ) {
		v1.push_back( i );
		for ( j=0; j<v1.size(); j++ ) {
			cout << v1[j] << "," ;
		}
		cout << endl;
	}
}
