#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str0("012345678901234");
	string str1("XYZ XYZ XYZ XYZ");
	
	cout << str0 << endl;
	cout << str1 << endl;
	
	// �Ōォ��T��
	cout << "�Ōォ�� XY �� " <<
		str1.rfind("XY") << " �o�C�g�ڂɌ�����܂���" << endl;
	cout << "�Ōォ�� XX �� " <<
		(( str1.rfind("XX") != string::npos )? "��������": "������Ȃ�����") << endl;
	// �w��ʒu����T��
	cout << "10 �o�C�g�ڂ��� XY �� " <<
		str1.rfind("XY",10) << " �o�C�g�ڂɌ�����܂���" << endl;
}
