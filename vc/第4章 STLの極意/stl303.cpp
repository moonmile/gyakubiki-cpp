#include <iostream>
using namespace std;

void main( void )
{
	char buf[100], ch;
	cout << "���͕���: " ;
	
	ch = cin.peek();
	cout << "peek ��������: " << ch << endl;
	ch = cin.get();
	cout << "get ��������: " << ch << endl;
	ch = cin.peek();
	cout << "peek ��������: " << ch << endl;

	cin.ignore( 10 );
	cout << "10 �o�C�g�ǂݎ̂�" << endl;
	ch = cin.peek();
	cout << "peek ��������: " << ch << endl;
	ch = cin.get();
	cout << "get ��������: " << ch << endl;
}
