#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

void main( void )
{
	string str1("Hello C++ world.");

	// �O�o�C�g�ڂ��ŏ��̕����ɂȂ�
	cout << str1 << endl;
	cout << "6�o�C�g��:[" << str1.at(6)   << "]" << endl;

	// �͈͊O���w�肵���Ƃ��͗�O����������
	try {
		cout << "�͈͊O["  << str1.at(100) << "]" << endl;
	} catch ( out_of_range e ) {
		cout << "��O���������܂��� [" << e.what() << "]" << endl;
	}
	
	// �Q�Ƃ��g���ď���������
	char &ch = str1.at(6);
	ch = 'J';
	cout << str1 << endl;
	// ���ڏ���������
	str1.at(6) = 'M';
	cout << str1 << endl;
	// '[]' ���Z�q���g���Ă�����
	str1[6] = 'C';
	cout << str1 << endl;
}
