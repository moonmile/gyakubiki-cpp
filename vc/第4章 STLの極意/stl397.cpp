#include <iostream>
#include <list>
using namespace std;

void main( void )
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
	
	if ( lst1 < lst2 ) {
		cout << "lst1‚Ì‚Ù‚¤‚ª¬‚³‚¢" << endl ;
	} else {
		cout << "lst1‚Ì‚Ù‚¤‚ª‘å‚«‚¢" << endl ;
	}
}
