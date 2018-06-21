#include <iostream>
#include <iomanip>
using namespace std;

int main( void )
{
	int n = 1234;
	cout << "数値: [" << n << "]" << endl;
	cout << "数値: [" << setw(10) << n << "]" << endl;
	
	char str[] = "ABC" ;
	cout << "文字列: [" << str << "]" << endl;
	cout << "文字列: [" << setw(10) << str << "]" << endl;

	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	cout << "文字列: [" << str2 << "]" << endl;
	cout << "文字列: [" << setw(10) << str2 << "]" << endl;
}
