#include <iostream>
#include <list>
using namespace std;

bool comp( int left, int right ) 
{
	if ( left == right ) return true;
	return false;
}

void main( void )
{
	int i;
	list <int>::iterator it;
	list <int> lst1, lst2;
	
	for ( i=0; i<10; i++ ) lst1.push_back( i );
	for ( i=0; i<10; i++ ) lst2.push_back( i+5 );
	lst1.merge( lst2 );
	
	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) cout << *it << "," ;
	cout << endl;
	
	// d•¡‚µ‚½—v‘f‚ðíœ‚·‚é
	// lst1.unique();
	lst1.unique(  comp );
	
	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) cout << *it << "," ;
	cout << endl;
}
