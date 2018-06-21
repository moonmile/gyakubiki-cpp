#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("C++");
	string str2("Java");
	// stringå^Ç≈î‰är
	if ( str1 != str2 ) {
		cout << "ï∂éöóÒÇÕàŸÇ»ÇÈ" << endl;
	} else {
		cout << "ï∂éöóÒÇÕìôÇµÇ¢" << endl;
	}
	// char*å^Ç≈î‰är
	if ( str1 != "Java" ) {
		cout << "ï∂éöóÒÇÕàŸÇ»ÇÈ" << endl;
	} else {
		cout << "ï∂éöóÒÇÕìôÇµÇ¢" << endl;
	}
}
