#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello C++ world.");
	
	cout << "erase 前 [" << str1 << "]" << endl;
	str1.erase();
	cout << "erase 後 [" << str1 << "]" << endl;
	
	str1 = "Hello world.";
	str1.erase( str1.begin() );
	cout << "最初の１文字を削除 [" << str1 << "]" << endl;
	
	str1 = "Hello C++ world.";
	str1.erase( 6,3 );
	cout << "7文字目から3文字削除 [" << str1 << "]" << endl;
	str1 = "Hello C++ world.";
	str1.erase( 6 );
	cout << "7文字目以降を削除 [" << str1 << "]" << endl;

	str1 = "Hello C++ world.";
	string::iterator first, last ;
	first = str1.begin() + 6;
	last = first + 3;
	str1.erase( first, last );
	cout << "7文字目から3文字削除 [" << str1 << "]" << endl;
}
