#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list <int> lst;
	for ( int i=0; i<10; i++ ) {
		lst.push_back( i );
	}
	
	cout << "lst: " ;
	list <int>::iterator it;
	for ( it = lst.begin(); it != lst.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
}
