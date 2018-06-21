#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello C++ world.");
	char buff[100] = {0};
	
	cout << str1.copy(buff, 5) << "文字コピーしました " << endl;
	cout << "[" << buff << "]" << endl;
	
	cout << str1.copy(buff, 5,2) << "文字コピーしました" << endl;
	cout << "[" << buff << "]" << endl;
}
