#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	cout << "入力文字: " ;
	cin.read( buf, 5 );
	cout << "入力値: " << buf << endl;
}
