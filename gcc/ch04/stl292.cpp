#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str = "Hello C++ world.";
	int    n = 10;
	
	cerr << "標準エラーに出力する" << endl;
	cerr << "文字列を出力: " << str << endl;
	cerr << "数値を出力:   " << n << endl; 
}
