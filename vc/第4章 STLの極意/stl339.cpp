#include <string>
#include <iostream>

using namespace std;

void main( void )
{
	string str("100,200,300,400");
	int n;
	cout << "�����Ώ�: " << str << endl;

	n = str.find_first_not_of("0123456789");
	cout << "check: " << n << " [" << str[n] << "]" << endl;
	n = str.find_first_not_of(",");
	cout << "check: " << n << " [" << str[n] << "]" << endl;
	// �S�Ĉʒu����ꍇ
	n = str.find_first_not_of("0123456789,");
	if ( n !=  string::npos ) {
		cout << "check: " << n << " [" << str[n] << "]" << endl;
	} else {
		cout << "check: �S�Ĉ�v" << endl;
	}
}
