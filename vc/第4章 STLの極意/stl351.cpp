#include <string>
#include <iostream>
#include <locale.h>
using namespace std;

void main( void )
{
	
	string str1("Hello world.");
	string str2;
	
	str2 = str1;
	cout << str2 << endl;
	str2 = "Hello C++ world.";
	cout << str2 << endl;
	str2 = 'C';
	cout << str2 << endl;
	// Unicode‚ðŽg‚¤
	setlocale(LC_CTYPE, "");
	wstring s;
	s = L"‚æ‚¤‚±‚» C/C++ ‚Ì¢ŠE‚Ö";
	wcout << s << endl;
}
