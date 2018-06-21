#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");
	
	cout << "erase �O [" << str1 << "]" << endl;
	str1.erase();
	cout << "erase �� [" << str1 << "]" << endl;
	
	str1 = "Hello world.";
	str1.erase( str1.begin() );
	cout << "�ŏ��̂P�������폜 [" << str1 << "]" << endl;
	
	str1 = "Hello C++ world.";
	str1.erase( 6,3 );
	cout << "7�����ڂ���3�����폜 [" << str1 << "]" << endl;
	str1 = "Hello C++ world.";
	str1.erase( 6 );
	cout << "7�����ڈȍ~���폜 [" << str1 << "]" << endl;

	str1 = "Hello C++ world.";
	string::iterator first, last ;
	first = str1.begin() + 6;
	last = first + 3;
	str1.erase( first, last );
	cout << "7�����ڂ���3�����폜 [" << str1 << "]" << endl;
}
