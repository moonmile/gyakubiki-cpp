#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	cout << "���͕���: " ;

	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;
	// 1�����߂�
	cin.unget();
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;
}
