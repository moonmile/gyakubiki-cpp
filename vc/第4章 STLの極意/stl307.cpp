#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	
	cout << "入力文字: " ;

	// 現在位置を取得
	cout << "現在位置: " << cin.tellg() << endl;
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;

	// 現在位置を取得
	cout << "現在位置: " << cin.tellg() << endl;
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;

	// 現在位置を取得
	cout << "現在位置: " << cin.tellg() << endl;
}
