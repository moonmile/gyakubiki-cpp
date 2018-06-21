#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp( int x )
{
	if ( x == 5 ) {
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

	val = 5;
	it = find_if ( v1.begin(), v1.end(), comp );
	cout << "—v‘f:" << val << " ‚Í" <<
		((it != v1.end())? "Œ©‚Â‚©‚Á‚½": "Œ©‚Â‚©‚ç‚È‚©‚Á‚½") << endl;
	for ( vector <int>::iterator j = v1.begin(); j != v1.end(); j++ ) {
		if ( j == it ) {
			cout << "[" << *j << "],";
		} else {
			cout << *j << ",";
		}
	}
	cout << endl;
}
