#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list <int>::iterator it;
	list <int> lst1;
	int i;
	
	for ( i=0; i<10; i++ ) {
		lst1.push_back(i);
	}
	for ( it = lst1.begin(); it != lst1.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	
	// ６番目に挿入
	it = lst1.begin();
	for ( i=0; i<5; i++ ) it++;
	lst1.insert( it, 10 );
	for ( it = lst1.begin(); it != lst1.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	
	// 先頭に挿入
	lst1.insert( lst1.begin(), 11 );
	for ( it = lst1.begin(); it != lst1.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	
	// 別のリストを挿入
	list <int> lst2;
	for ( i=0; i<5;  i++ ) {
		lst2.push_back( 90+i );
	}
	it = lst1.begin();
	for ( i=0; i<3; i++ ) it++;
	lst1.insert( it, lst2.begin(), lst2.end() );
	
	for ( it = lst1.begin(); it != lst1.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
}
