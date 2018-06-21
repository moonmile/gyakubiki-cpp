#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	
	for ( int i=0; i<v1.size(); i++ ) {
		v1[i] = i*i;
	}
	// イテレータを使って表示
	for ( vector<int>::iterator x = v1.begin(); x != v1.end(); x++ ) {
		cout << *x << "," ;
	}
	cout << endl;
}
