#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// �C�e���[�^���g���ĂP�������o�͂���
	for ( string::iterator i=str1.begin(); i != str1.end(); i++ ) {
		cout << "[" << *i << "]" ;
	}
	cout << endl;
	
	string::iterator it = str1.begin();
	cout << *(it+4) << endl;	
}
