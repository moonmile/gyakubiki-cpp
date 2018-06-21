#include <iostream>
#include <iomanip>
using namespace std;

int main( void )
{
	int n = 15;

	cout << "数値: " << n << endl;
	cout << "8進数: " << oct << n << endl;
	cout << "8進数: " << setw(3) << oct << n << endl;
	cout << "8進数: " << setw(3) << setfill('0') << oct << n << endl;
}
