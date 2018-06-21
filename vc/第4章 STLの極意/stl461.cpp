#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) v1[i] = i;
	vector <int> v2( v1 );
	vector <int> v3( v1 );
	v3[5] = 99;
	
	
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	for ( i=0; i<v2.size(); i++ ) {
		cout << v2[i] << ",";
	}
	cout << endl;
	for ( i=0; i<v3.size(); i++ ) {
		cout << v3[i] << ",";
	}
	cout << endl;
	
	cout << "v1 ‚Æ v2 ‚Í " 
	     << ((equal(v1.begin(), v1.end(), v2.begin()) == true)? 
		   "“™‚µ‚¢": "ˆÙ‚È‚é") << endl;
	cout << "v1 ‚Æ v3 ‚Í " 
	     << ((equal(v2.begin(), v2.end(), v3.begin()) == true)? 
		   "“™‚µ‚¢": "ˆÙ‚È‚é") << endl;
}	
