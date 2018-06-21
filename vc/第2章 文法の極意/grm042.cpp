#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	int m = 10;
	m += 20;
	
	printf( "m = %d\n", m );
	
	string s ;
	s = "Hello ";
	s += "C++ World.";
	cout << "s = " << s << endl;
}
