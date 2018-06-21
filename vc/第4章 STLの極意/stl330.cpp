#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// cout ‚ðŽg‚¤
	cout << "cout ‚Ìê‡: " << str1 << endl;
	// const char * ‚ð•Ô‚·
	printf( "printf ‚Ìê‡: %s\n", str1.c_str() );
}
