#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v1(4), v2(4);
	int i;
	
	v1[0] = 'C'; v1[1] = '+'; v1[2] = '+';
	v2[0] = 'J'; v2[1] = 'a'; v2[2] = 'v'; v2[3] = 'a';
	
	if ( v1 > v2 ) {
		cout << "v1のvectorは大きい" << endl ;
	} else {
		cout << "v1のvectorは小さい" << endl ;
	}
}
