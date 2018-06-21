#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string s1( "Hello " );
	string s2( "World." );
	string out;
	
	// 通常の追加
	out = "";
	out.append( s1 );
	out.append( "C++ " );
	out.append( "World." );
	cout << out << endl;

	// 文字列中の指定文字数を追加
	out = "";
	out.append( s1 );
	out.append( "C++ ", 1 );
	out.append( " " );
	out.append( "World." );
	cout << out << endl;

	// 指定位置に追加
	out = "Hello ";
	out.append( "ABCDEF", 2, 1 );
	cout << out << "++ World." << endl;

	// 指定回数分、１文字を追加
	out = "Hello World.";
	out.append( 10, '!' );
	cout << out << endl;

	// '+' オペレータを使った場合
	out = "";
	out = s1 + "C++ " + s2;
	cout << out << endl;

}
