#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	string str2("Hello world.");
	// string^Εδr	
	if ( str1 == str2 ) {
		cout << "ΆρΝ΅’" << endl;
	} else {
		cout << "ΆρΝΩΘι" << endl;
	}
	// char*^Εδr
	if ( str1 == "Hello world." ) {
		cout << "ΆρΝ΅’" << endl;
	} else {
		cout << "ΆρΝΩΘι" << endl;
	}
}
