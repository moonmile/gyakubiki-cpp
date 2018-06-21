#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x, int y )
{
	if ( x == y ) {
		return true;
	} else {
		return false;
	}
}

void main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
		cout << v1[i] << ",";
	}
	cout << endl;

	vector <int> v2;
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	includes ( v1.begin(), v1.end(), v2.begin(), v2.end() );
	cout << "シーケンス v2 は " << 
	  ((includes ( v1.begin(), v1.end(), v2.begin(), v2.end(), comp ) == true)?
	  "見つかった": "見つからなかった") << endl;
}

