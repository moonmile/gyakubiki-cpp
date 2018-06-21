#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str0("012345678901234");
	string str1("XYZ XYZ XYZ XYZ");
	
	cout << str0 << endl;
	cout << str1 << endl;
	
	// 最後から探索
	cout << "最後から XY が " <<
		str1.rfind("XY") << " バイト目に見つかりました" << endl;
	cout << "最後から XX が " <<
		(( str1.rfind("XX") != string::npos )? "見つかった": "見つからなかった") << endl;
	// 指定位置から探索
	cout << "10 バイト目から XY が " <<
		str1.rfind("XY",10) << " バイト目に見つかりました" << endl;
}
