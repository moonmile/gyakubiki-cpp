#include <iostream>
using namespace std;

void main( void )
{
	// 入力用の１文字バッファを用意する
	cout << "１文字入力:";
	char ch;
	cin.get( ch );
	cout << "入力値:" << ch << endl;

	// 入力用のバッファを用意する
	cout << "文字入力:";
	char buf[100];
	cin.get( buf, sizeof buf  );
	cout << "入力値:" << buf << endl;
	
	// デリミタを指定する
	cout << "文字入力:";
	char buf2[100];
	cin.get( buf2, sizeof buf2, ',' );
	cout << "入力値:" << buf2 << endl;
}
