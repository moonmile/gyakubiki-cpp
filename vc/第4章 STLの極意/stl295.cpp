#include <string>
#include <iostream>
#include <sstream>
using namespace std;

void main( void )
{
	cout << "NULL ������ǉ�����" << ends;
	cout << endl;
	
	stringstream ss;
	ss << "Hello C" << ends << "C++ World." ;
	cout << ss.str() << endl;
}
