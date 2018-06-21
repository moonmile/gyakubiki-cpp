#include <iostream>
#include <iomanip>
#ifndef _MSC_VER
#error "this function in MC-VC only"
#endif
using namespace std;

int main( void )
{
	char str[] = "ABC";
	cout << "•¶Žš—ñ: [" << str << "]" << endl;
	cout << "•¶Žš—ñ: [" << setw(10) << left << str << "]" << endl;

	int n = 123 ;
	cout << "”’l: [" << n << "]" << endl;
	cout << "”’l: [" << setw(10) <<  left << n << "]" << endl;
}
