#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v1(4), v2(4), v3(3);
	int i;
	
	v1[0] = 'C'; v1[1] = '+'; v1[2] = '+';
	v2[0] = 'J'; v2[1] = 'a'; v2[2] = 'v'; v2[3] = 'a';
	v3[0] = 'C'; v3[1] = '+'; v3[2] = '+';
	
	
	if ( v1 != v2 ) {
		cout << "2‚Â‚Ìvector‚ÍˆÙ‚È‚é" << endl ;
	} else {
		cout << "2‚Â‚Ìvector‚Í“™‚µ‚¢" << endl ;
	}
	if ( v1 != v3 ) {
		cout << "2‚Â‚Ìvector‚ÍˆÙ‚È‚é" << endl ;
	} else {
		cout << "2‚Â‚Ìvector‚Í“™‚µ‚¢" << endl ;
	}
}
