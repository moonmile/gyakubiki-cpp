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
	lst2.push_back('C');
	lst2.push_back('+');
	lst2.push_back('+');
	
	if ( lst1 == lst2 ) {
		cout << "2‚Â‚Ìlist‚Í“™‚µ‚¢" << endl ;
	} else {
		cout << "2‚Â‚Ìlist‚ÍˆÙ‚È‚é" << endl ;
	}
}
