#include <string>
#include <iostream>
#include <locale.h>
using namespace std;

int main( void )
{
	
	string str1("Hello world.");
	string str2;
	
	str2 = str1;
	cout << str2 << endl;
	str2 = "Hello C++ world.";
	cout << str2 << endl;
	str2 = 'C';
	cout << str2 << endl;
	// Unicodeを使う
	setlocale(LC_CTYPE, "");
	wstring s;
	s = L"ようこそ C/C++ の世界へ";
	wcout << s << endl;
}
