#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	
	cout << "[" << str1 << "]" << endl;
	cout << "size:" << str1.size() << endl;
	
	str1.resize(5);
	cout << "[" << str1 << "]" << endl;
	cout << "size:" << str1.size() << endl;

	str1.resize(10);
	cout << "[" << str1 << "]" << endl;
	cout << "size:" << str1.size() << endl;
	
	str1.resize(15,'x');
	cout << "[" << str1 << "]" << endl;
	cout << "size:" << str1.size() << endl;
}
