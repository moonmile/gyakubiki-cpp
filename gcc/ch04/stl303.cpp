#include <iostream>
using namespace std;

int main( void )
{
	char buf[100], ch;
	cout << "入力文字: " ;
	
	ch = cin.peek();
	cout << "peek した文字: " << ch << endl;
	ch = cin.get();
	cout << "get した文字: " << ch << endl;
	ch = cin.peek();
	cout << "peek した文字: " << ch << endl;

	cin.ignore( 10 );
	cout << "10 バイト読み捨て" << endl;
	ch = cin.peek();
	cout << "peek した文字: " << ch << endl;
	ch = cin.get();
	cout << "get した文字: " << ch << endl;
}
