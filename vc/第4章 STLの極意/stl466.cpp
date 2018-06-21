#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i, val;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	pair < vector <int>::iterator, 
	       vector <int>::iterator > result;

	// ‚·‚×‚Ä‚Ì—v‘f‚ª“¯‚¶ê‡
	vector <int> v2( v1 );
	result = mismatch ( v1.begin(), v1.end(), v2.begin() );
	if ( result.first == v1.end() && result.second == v2.end() ) {
		cout << "—v‘f‚ª‚·‚×‚Ä“¯‚¶" << endl;
	} else {
		cout << "ˆÙ‚È‚é—v‘f‚ğŒ©‚Â‚¯‚½" 
			<< *(result.first) << "," << *(result.second) << endl;
	}

	// ‚·‚×‚Ä‚Ì—v‘f‚ª“¯‚¶ê‡
	vector <int> v3( v1 );
	v3[5] = 99;
	result = mismatch ( v1.begin(), v1.end(), v3.begin() );
	if ( result.first == v1.end() && result.second == v2.end() ) {
		cout << "—v‘f‚ª‚·‚×‚Ä“¯‚¶" << endl;
	} else {
		cout << "ˆÙ‚È‚é—v‘f‚ğŒ©‚Â‚¯‚½" 
			<< *(result.first) << "," << *(result.second) << endl;
	}
}	
