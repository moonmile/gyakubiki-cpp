#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	
	// 先頭から全体で探索
	cout << "先頭から world が " << 
		str1.find("world") << " バイト目に見つかりました" << endl;
	cout << "先頭から web が " << 
		(( str1.find("web") != string::npos )? "見つかった": "見つからなかった") << endl;
	// 指定文字以降で探索
	cout << "4 文字目以降で world が " << 
		(( str1.find("world",3) != string::npos )? "見つかった": "見つからなかった") << endl;
	cout << "4 文字目以降で Hello が " << 
		(( str1.find("Hello",3) != string::npos )? "見つかった": "見つからなかった") << endl;
	// 指定文字以降で、指定文字数分を探索対象にする
	cout << "7 文字目以降で wo が " <<
		(( str1.find("wowow",6,2) != string::npos )? "見つかった": "見つからなかった") << endl;
	cout << "9 文字目以降で wo が " <<
		(( str1.find("wowow",8,2) != string::npos )? "見つかった": "見つからなかった") << endl;
}
