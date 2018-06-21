#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main( void )
{
	vector <char> v1,v2,v3;
	int i;
	
	v1.push_back('A');
	v1.push_back('B');
	v1.push_back('C');
	v2.push_back('A');
	v2.push_back('B');
	v2.push_back('D');
	v3.resize(3);
	copy ( v1.begin(), v1.end(), v3.begin() );
	
	cout << "v1: " ;
	for ( i=0; i<v1.size(); i++ ) cout << v1[i] << ",";
	cout << endl;
	cout << "v2: " ;
	for ( i=0; i<v2.size(); i++ ) cout << v2[i] << ",";
	cout << endl;
	cout << "v3: " ;
	for ( i=0; i<v3.size(); i++ ) cout << v3[i] << ",";
	cout << endl;

	bool b;
	b = lexicographical_compare ( v1.begin(), v1.end(), 
	  v2.begin(), v2.end() );
	cout << "v1 ‚Æ v2 ‚ð”äŠr: " << ((b)? "true": "false") << endl;
	b = lexicographical_compare ( v2.begin(), v2.end(), 
	  v1.begin(), v1.end() );
	cout << "v2 ‚Æ v1 ‚ð”äŠr: " << ((b)? "true": "false") << endl;
	b = lexicographical_compare ( v1.begin(), v1.end(), 
	  v3.begin(), v3.end() );
	cout << "v1 ‚Æ v3 ‚ð”äŠr: " << ((b)? "true": "false") << endl;
}

