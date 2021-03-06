#include <iostream>
#include <list>
#include <functional>
using namespace std;

int main( void )
{
	int i;
	list <int>::iterator it;
	list <int> lst1, lst2;
	
	for ( i=0; i<10; i++ ) lst1.push_back( 10-i );
	for ( i=0; i<10; i++ ) lst2.push_back( 5-i );

	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) cout << *it << "," ;
	cout << endl;
	cout << "lst2: " ;
	for ( it = lst2.begin(); it != lst2.end(); it++ ) cout << *it << "," ;
	cout << endl;
	
	// マージする
	lst1.merge( lst2, greater<int>() );
	
	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) cout << *it << "," ;
	cout << endl;
	cout << "lst2: " ;
	for ( it = lst2.begin(); it != lst2.end(); it++ ) cout << *it << "," ;
	cout << endl;
}
