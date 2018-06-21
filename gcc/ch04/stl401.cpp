#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list <int> lst;
	list <int>::iterator it;
	int i;
	
	for ( i=0; i<10; i++ ) {
		lst.push_back(i);
	}
	for ( i=0; i<10; i++ ) {
		lst.pop_back();
		for ( it = lst.begin(); it != lst.end(); it++ ) {
			cout << *it << "," ;
		}
		cout << endl;
	}
}
