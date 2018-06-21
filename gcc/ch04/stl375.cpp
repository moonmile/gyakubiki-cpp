#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(4), v2(4), v3(3);
	int i;
	
	v1[0] = 'C'; v1[1] = '+'; v1[2] = '+';
	v2[0] = 'J'; v2[1] = 'a'; v2[2] = 'v'; v2[3] = 'a';
	v3[0] = 'C'; v3[1] = '+'; v3[2] = '+';
	
	
	if ( v1 != v2 ) {
		cout << "2つのvectorは異なる" << endl ;
	} else {
		cout << "2つのvectorは等しい" << endl ;
	}
	if ( v1 != v3 ) {
		cout << "2つのvectorは異なる" << endl ;
	} else {
		cout << "2つのvectorは等しい" << endl ;
	}
}
