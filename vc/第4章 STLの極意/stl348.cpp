#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("C++");
	string str2("Java");
	// string^Εδr
	if ( str1 != str2 ) {
		cout << "ΆρΝΩΘι" << endl;
	} else {
		cout << "ΆρΝ΅’" << endl;
	}
	// char*^Εδr
	if ( str1 != "Java" ) {
		cout << "ΆρΝΩΘι" << endl;
	} else {
		cout << "ΆρΝ΅’" << endl;
	}
}
