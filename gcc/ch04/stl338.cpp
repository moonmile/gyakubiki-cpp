#include <string>
#include <iostream>

using namespace std;

int main( void )
{
	string str("100,200,300,400");
	int n;
	cout << "検索対象: " << str << endl;

	n = str.find_first_of("0123456789");
	cout << "check: " << n << " [" << str[n] << "]" << endl;
	n = str.find_first_of(",");
	cout << "check: " << n << " [" << str[n] << "]" << endl;
	
	n = str.find_first_of("abcdefg");
	if ( n != string::npos ) {
		cout << "check: " << n << " [" << str[n] << "]" << endl;
	} else {
		cout << "check: 見つからなかった" << endl;
	}
}
