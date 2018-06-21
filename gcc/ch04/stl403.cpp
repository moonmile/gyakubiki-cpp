#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list <int> lst;
	for ( int i=0; i<10; i++ ) {
		lst.push_back( i );
	}
	lst.push_back(5);
	
	cout << "lst: " ;
	list <int>::iterator it;
	for ( it = lst.begin(); it != lst.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	// 要素「5」を割駆除する
	lst.remove(5);
	cout << "lst: " ;
	for ( it = lst.begin(); it != lst.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
}
