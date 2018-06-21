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
	list <int>::iterator it = lst.begin();
	while ( it != lst.end() ) {
		cout << *it << "," ;
		++it;
	}
	cout << endl;
}
