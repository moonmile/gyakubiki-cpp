#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i*i;
	}
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	cout << "clear ‘O:" << v1.size() << endl;
	v1.clear();
	cout << "clear Œã:" << v1.size() << endl;
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
}
