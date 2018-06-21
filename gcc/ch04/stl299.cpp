#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	char s[100];
	cout << "文字列入力:";
	cin >> s;
	cout << "入力値:" << s << endl;
	string str;
	cout << "文字列入力:";
	cin >> str;
	cout << "入力値:" << str << endl;
	char ch;
	cout << "１文字入力:";
	cin >> ch;
	cout << "入力値:" << ch << endl;
	int i;
	cout << "数値入力:";
	cin >> i;
	cout << "入力値:" << i << endl;
	double d;
	cout << "実数入力:";
	cin >> d;
	cout << "入力値:" << d << endl;
}
