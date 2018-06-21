#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	cout << "入力文字: " ;

	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;
	// 1文字戻す
	cin.unget();
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;
}
