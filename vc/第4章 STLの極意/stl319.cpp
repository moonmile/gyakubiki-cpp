#include <iostream>
#include <iomanip>
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "”’l: [" << n << "]" << endl;
	cout << "”’l: [" << setw(10) << n << "]" << endl;
	
	char str[] = "ABC" ;
	cout << "•¶Žš—ñ: [" << str << "]" << endl;
	cout << "•¶Žš—ñ: [" << setw(10) << str << "]" << endl;

	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	cout << "•¶Žš—ñ: [" << str2 << "]" << endl;
	cout << "•¶Žš—ñ: [" << setw(10) << str2 << "]" << endl;
}
