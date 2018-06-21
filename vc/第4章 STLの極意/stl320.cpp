#include <iostream>
#include <iomanip>
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "”’l: [" << n << "]" << endl;
	cout << "”’l: [" << setw(10) << setfill(' ') << n << "]" << endl;
	cout << "”’l: [" << setw(10) << setfill('*') << n << "]" << endl;
	
	char str[] = "ABC" ;
	cout << "•¶Žš—ñ: [" << str << "]" << endl;
	cout << "•¶Žš—ñ: [" << setw(10) << setfill(' ') << str << "]" << endl;
	cout << "•¶Žš—ñ: [" << setw(10) << setfill('*') << str << "]" << endl;
}
