#include <iostream>
#include <list>
using namespace std;

void main( void )
{
	list <int> lst;
	list <int>::iterator it;
	
	for ( int i=0; i<10; i++ ) {
		lst.push_back( i );
	}
	cout << "lst: " ;
	for ( it = lst.begin(); it != lst.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	
	cout << "lst: " ;
	list<int>::reverse_iterator rit = lst.rend();
	do {
		rit--;
		cout << *rit << "," ;
	} while ( rit != lst.rbegin() ) ;
	cout << endl;
}
