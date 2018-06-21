#include <stdio.h>
#include <string>
using namespace std;

template<class T> 
int CMP( T x, T y ) 
{
	if ( x > y ) {
		return 1;
	} else if ( x == y ) {
		return 0;
	} else {
		return -1;
	}
}
void main( void )
{
	int x = 0, y = 1;
	printf( "max int: %d\n", CMP( x, y ));
	
	string n = "bbb", m = "aaa";
	printf( "max string: %d\n", CMP( n, m ));
}
