#include <iostream>
#include <list>
using namespace std;

int main( void )
{
	list<char> lst1, lst2;
	int i;
	
	lst1.push_back('C');
	lst1.push_back('+');
	lst1.push_back('+');
	lst2.push_back('J');
	lst2.push_back('a');
	lst2.push_back('v');
	lst2.push_back('a');
	
	if ( lst1 > lst2 ) {
		cout << "lst1のほうが大きい" << endl ;
	} else {
		cout << "lst1のほうが小さい" << endl ;
	}
}
