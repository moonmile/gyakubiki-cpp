#include <iostream>
using namespace std;

void main( void )
{
	// ���͗p�̂P�����o�b�t�@��p�ӂ���
	cout << "�P��������:";
	char ch;
	cin.get( ch );
	cout << "���͒l:" << ch << endl;

	// ���͗p�̃o�b�t�@��p�ӂ���
	cout << "��������:";
	char buf[100];
	cin.get( buf, sizeof buf  );
	cout << "���͒l:" << buf << endl;
	
	// �f���~�^���w�肷��
	cout << "��������:";
	char buf2[100];
	cin.get( buf2, sizeof buf2, ',' );
	cout << "���͒l:" << buf2 << endl;
}
