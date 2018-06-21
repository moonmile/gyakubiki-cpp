#include <iostream>
#include <string>
using namespace std;

void main( void )
{
	string buf;
	// 1行入力
	cout << "１行入力:";
	getline( cin, buf );
	cout << "入力値:" << buf << endl;
	
	// デリミタを用意する
	cout << "１行入力:";
	getline( cin, buf, ',' );
	cout << "入力値:" << buf << endl;
}
