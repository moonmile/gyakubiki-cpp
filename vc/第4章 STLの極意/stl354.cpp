#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	int n;
	
	try {
		n = 4;
		cout << n << "バイト目:[" << str1[n] << "]" << endl;
		n = 100;
		cout << n << "バイト目:[" << str1[n] << "]" << endl;
	} catch ( ... ) {
		cout << "エラーが発生しました " << endl;
	}
}
