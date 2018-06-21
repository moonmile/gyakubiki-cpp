#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	// ファイルをリダイレクトしてください
	cout << "入力文字: " ;

	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;

	// 先頭に戻す
	cin.seekg( 0 );	
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;

	// 先頭から２バイト目へ戻す
	cin.seekg( 2, ios::beg );
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;

	// 現在位置から２バイト戻す
	cin.seekg( 2, ios::cur );
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;

	// 終端から10バイト前まで進める
	cin.seekg( -10, ios::end );
	// 5 バイト分読み込み
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;
}
