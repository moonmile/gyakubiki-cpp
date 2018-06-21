#include <iostream>
#include <iomanip>
#ifndef _MSC_VER
#error "this function in MS-VC only"
#endif
using namespace std;

int main( void )
{
	char str[] = "ABC";
	cout << "•¶Žš—ñ: [" << str << "]" << endl;
	cout << "•¶Žš—ñ: [" << setw(10) << right << str << "]" << endl;

	int n = 123 ;
	cout << "”’l: [" << n << "]" << endl;
	cout << "”’l: [" << setw(10) << right <<  n << "]" << endl;
	cout << "”’l: [" << setw(10) << right 
	     << setfill('0') << n << "]" << endl;
}
