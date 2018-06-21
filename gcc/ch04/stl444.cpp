#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main( void )
{
	vector <int> v1(10);
	int i;
	
	for ( i=0; i<v1.size(); i++ ) {
		v1[i] = i;
		cout << v1[i] << ",";
	}
	cout << endl;

	// 先頭の２つを回転する
	rotate ( v1.begin(), v1.begin()+2, v1.end() );
	for ( i=0; i<v1.size(); i++ ) {
		cout << v1[i] << ",";
	}
	cout << endl;
	
	list<int> lst;
	for ( int i=0; i<10; i++ ) lst.push_back(i);
	list<int>::iterator it;

	rotate( lst.begin(), ++lst.begin(), lst.end());
	for ( it = lst.begin();  it != lst.end(); ++it ) {
		cout << *it << "," ;
	}
	cout << endl;
	rotate( lst.begin(), --lst.end(), lst.end());
	for ( it = lst.begin();  it != lst.end(); ++it ) {
		cout << *it << "," ;
	}
	cout << endl;

}	

