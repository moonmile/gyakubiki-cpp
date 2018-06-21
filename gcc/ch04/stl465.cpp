#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	vector <int>::iterator it;
	int val, i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
	}
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	vector <int> v2;
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	it = find_first_of ( v1.begin(), v1.end(), v2.begin(), v2.end());
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
	
	vector <int> v3;
	v2.push_back(5);
	v2.push_back(5);
	v2.push_back(6);

	it = find_first_of ( v1.begin(), v1.end(), v3.begin(), v3.end());
	cout << "シーケンス v2 は " << 
		((it != v1.end())? "見つかった": "見つからなかった") << endl;
}
