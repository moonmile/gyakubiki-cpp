#include <iostream>
#include <list>
using namespace std;

void main( void )
{
	int i;
	list <int>::iterator it;
	list <int> lst1, lst2;
	
	for ( i=0; i<10; i++ ) lst1.push_back( i );
	for ( i=0; i<10; i++ ) lst2.push_back( i+5 );

	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) cout << *it << "," ;
	cout << endl;
	cout << "lst2: " ;
	for ( it = lst2.begin(); it != lst2.end(); it++ ) cout << *it << "," ;
	cout << endl;
	
	// ƒ}[ƒW‚·‚é
	lst1.merge( lst2 );
	
	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) cout << *it << "," ;
	cout << endl;
	cout << "lst2: " ;
	for ( it = lst2.begin(); it != lst2.end(); it++ ) cout << *it << "," ;
	cout << endl;
}
