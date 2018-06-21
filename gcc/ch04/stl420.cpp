#include <iostream>
#include <map>
#include <string>
using namespace std;

int main( void )
{
	map <char, int> m1, m2;
	m1['A'] = 1; m1['B'] = 2; m1['C'] = 3; 
	m2['A'] = 1; m2['b'] = 2; m2['C'] = 3; 
	
	if ( m1 != m2 ) {
		cout << "m1 と m2 は異なる" << endl;
	} else {
		cout << "m1 と m2 は等しい" << endl;
	}
}
