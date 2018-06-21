#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(3), v2(3), v3(3);
	int i;
	
	v1[0] = 'C'; v1[1] = '+'; v1[2] = '+';
	v2[0] = 'C'; v2[1] = '+'; v2[2] = '+';
	v3[0] = 'C';
	
	if ( v1 == v2 ) {
		cout << "2つのvectorは等しい" << endl ;
	} else {
		cout << "2つのvectorは異なる" << endl ;
	}
	if ( v1 == v3 ) {
		cout << "2つのvectorは等しい" << endl ;
	} else {
		cout << "2つのvectorは異なる" << endl ;
	}
}
