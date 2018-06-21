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

	// 先頭の２つを回転する
	vector <int> v2(10,-1);
	rotate_copy ( v1.begin(), v1.begin()+2, v1.end(), v2.begin() );
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
}	

