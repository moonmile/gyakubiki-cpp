#include <iostream>
#include <iomanip>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

int main( void )
{
	char str[] = "ABC";
	cout << "文字列: [" << str << "]" << endl;
	cout << "文字列: [" << setw(10) << left << str << "]" << endl;

	int n = 123 ;
	cout << "数値: [" << n << "]" << endl;
	cout << "数値: [" << setw(10) <<  left << n << "]" << endl;
}
