#include <string>
#include <iostream>
#include <sstream>
using namespace std;

void main( void )
{
	cout << "NULL 文字を追加する" << ends;
	cout << endl;
	
	stringstream ss;
	ss << "Hello C" << ends << "C++ World." ;
	cout << ss.str() << endl;
}
