#include <iostream>
#include <iomanip>
using namespace std;

void main( void )
{
	int n = 1234;
	cout << "���l: [" << n << "]" << endl;
	cout << "���l: [" << setw(10) << n << "]" << endl;
	
	char str[] = "ABC" ;
	cout << "������: [" << str << "]" << endl;
	cout << "������: [" << setw(10) << str << "]" << endl;

	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	cout << "������: [" << str2 << "]" << endl;
	cout << "������: [" << setw(10) << str2 << "]" << endl;
}
