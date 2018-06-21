#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;

	// fill ‘O
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	// æ“ª‚Ì—v‘f‚¾‚¯‚ðÝ’è‚·‚é
	fill( v1.begin(), v1.begin()+1, 99 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;

	// “Á’è‚Ì”ÍˆÍ‚ðÝ’è‚·‚é
	fill( v1.begin(), v1.begin()+5, 99 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
		
	// —v‘f‘S‘Ì‚ðÝ’è‚·‚é
	fill( v1.begin(), v1.end(), 99 );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
}	
