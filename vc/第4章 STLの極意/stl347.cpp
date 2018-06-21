#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	string str2("Hello world.");
	// stringå^Ç≈î‰är	
	if ( str1 == str2 ) {
		cout << "ï∂éöóÒÇÕìôÇµÇ¢" << endl;
	} else {
		cout << "ï∂éöóÒÇÕàŸÇ»ÇÈ" << endl;
	}
	// char*å^Ç≈î‰är
	if ( str1 == "Hello world." ) {
		cout << "ï∂éöóÒÇÕìôÇµÇ¢" << endl;
	} else {
		cout << "ï∂éöóÒÇÕàŸÇ»ÇÈ" << endl;
	}
}
