#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");
	char buff[100] = {0};
	
	cout << str1.copy(buff, 5) << "�����R�s�[���܂��� " << endl;
	cout << "[" << buff << "]" << endl;
	
	cout << str1.copy(buff, 5,2) << "�����R�s�[���܂���" << endl;
	cout << "[" << buff << "]" << endl;
}
