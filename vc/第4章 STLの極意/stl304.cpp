#include <iostream>
using namespace std;

void main( void )
{
	char buf[100] = {0};
	cout << "���͕���: " ;
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;
}
