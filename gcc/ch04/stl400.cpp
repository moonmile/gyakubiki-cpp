#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list <int> lst;
	list <int>::iterator it;
	int i;
	
	for ( i=0; i<10; i++ ) {
		lst.push_front( i );
		for ( it = lst.begin(); it != lst.end(); it++ ) {
			cout << *it << "," ;
		}
		cout << endl;
	}
}
