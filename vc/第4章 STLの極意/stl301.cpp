#include <iostream>
#include <string>
using namespace std;

void main( void )
{
	string buf;
	// 1�s����
	cout << "�P�s����:";
	getline( cin, buf );
	cout << "���͒l:" << buf << endl;
	
	// �f���~�^��p�ӂ���
	cout << "�P�s����:";
	getline( cin, buf, ',' );
	cout << "���͒l:" << buf << endl;
}
