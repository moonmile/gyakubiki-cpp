#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

int main( void )
{
	string str1("Hello C++ world.");

	// ０バイト目が最初の文字になる
	cout << str1 << endl;
	cout << "6バイト目:[" << str1.at(6)   << "]" << endl;

	// 範囲外を指定したときは例外が発生する
	try {
		cout << "範囲外["  << str1.at(100) << "]" << endl;
	} catch ( out_of_range e ) {
		cout << "例外が発生しました [" << e.what() << "]" << endl;
	}
	
	// 参照を使って書き換える
	char &ch = str1.at(6);
	ch = 'J';
	cout << str1 << endl;
	// 直接書き換える
	str1.at(6) = 'M';
	cout << str1 << endl;
	// '[]' 演算子を使っても同じ
	str1[6] = 'C';
	cout << str1 << endl;
}
