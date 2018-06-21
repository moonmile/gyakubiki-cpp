#include <iostream>
#include <list>
using namespace std;

void main( void )
{
	int i;
	list <int>::iterator it;
	
	// 要素数を指定しないコンストラクタ
	list <int> lst1;
	for ( i=0; i<10; i++ ) {
		lst1.push_back( i );
	}
	
	cout << "lst1: " ;
	for ( it = lst1.begin(); it != lst1.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	
	// 要素数を指定したコンストラクタ
	list <int> lst2( lst1.size() );
	i = 0;
	for ( it = lst2.begin(); it != lst2.end(); it++ ) {
		*it = i + 90;
		i++;
	}
	
	cout << "lst2: " ;
	for ( it = lst2.begin(); it != lst2.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
	
	// 既存のリストからコピーする
	list <int> lst3( lst1.begin(), lst1.end() );
	cout << "lst3: " ;
	for ( it = lst3.begin(); it != lst3.end(); it++ ) {
		cout << *it << "," ;
	}
	cout << endl;
}
