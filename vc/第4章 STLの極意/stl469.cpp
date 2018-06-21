#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
	  ((includes ( v1.begin(), v1.end(), v2.begin(), v2.end() ) == true)?
	  "見つかった": "見つからなかった") << endl;
	
	vector <int> v3;
	v3.push_back(5);
	v3.push_back(5);
	v3.push_back(6);

	cout << "シーケンス v3 は " << 
	  ((includes ( v1.begin(), v1.end(), v3.begin(), v3.end() ) == true)?
	  "見つかった": "見つからなかった") << endl;
}
