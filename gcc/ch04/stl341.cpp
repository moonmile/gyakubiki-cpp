#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str("100,200,300,400");
	int n;
	cout << "検索対象: " << str << endl;

	n = str.find_last_not_of("0123456789");
	cout << "check: " << n << " [" << str[n] << "]" << endl;
	n = str.find_last_not_of(",");
	cout << "check: " << n << " [" << str[n] << "]" << endl;
	// 全て位置する場合
	n = str.find_last_not_of("0123456789,");
	if ( n !=  string::npos ) {
		cout << "check: " << n << " [" << str[n] << "]" << endl;
	} else {
		cout << "check: 全て一致" << endl;
	}
}
