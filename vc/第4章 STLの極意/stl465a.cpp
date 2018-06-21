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

	it = find_first_of ( v1.begin(), v1.end(), v2.begin(), v2.end(), comp );
	cout << "シーケンス v2 は " << 
		((it != v1.end())? "見つかった": "見つからなかった") << endl;
	for ( vector <int>::iterator j = v1.begin(); j != v1.end(); j++ ) {
		if ( j == it ) {
			cout << "[" << *j << "],";
		} else {
			cout << *j << ",";
		}
	}
	cout << endl;
}
