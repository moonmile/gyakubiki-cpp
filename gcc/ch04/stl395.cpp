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
	lst2.push_back('C');
	lst2.push_back('+');
	lst2.push_back('+');
	
	if ( lst1 == lst2 ) {
		cout << "2つのlistは等しい" << endl ;
	} else {
		cout << "2つのlistは異なる" << endl ;
	}
}
