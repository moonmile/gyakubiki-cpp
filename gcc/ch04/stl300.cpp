#include <iostream>
using namespace std;

int main( void )
{
	// char 型で get メソッドを使う
	cout << "１文字入力:";
	char ch = cin.get();
	cout << "入力値:" << ch << endl;
	
	// int 型で get メソッドを使う
	cout << "１文字入力:";
	int i = cin.get();
	cout << "入力値:" << i << endl;
}
