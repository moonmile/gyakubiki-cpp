#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	
	// �擪����S�̂ŒT��
	cout << "�擪���� world �� " << 
		str1.find("world") << " �o�C�g�ڂɌ�����܂���" << endl;
	cout << "�擪���� web �� " << 
		(( str1.find("web") != string::npos )? "��������": "������Ȃ�����") << endl;
	// �w�蕶���ȍ~�ŒT��
	cout << "4 �����ڈȍ~�� world �� " << 
		(( str1.find("world",3) != string::npos )? "��������": "������Ȃ�����") << endl;
	cout << "4 �����ڈȍ~�� Hello �� " << 
		(( str1.find("Hello",3) != string::npos )? "��������": "������Ȃ�����") << endl;
	// �w�蕶���ȍ~�ŁA�w�蕶��������T���Ώۂɂ���
	cout << "7 �����ڈȍ~�� wo �� " <<
		(( str1.find("wowow",6,2) != string::npos )? "��������": "������Ȃ�����") << endl;
	cout << "9 �����ڈȍ~�� wo �� " <<
		(( str1.find("wowow",8,2) != string::npos )? "��������": "������Ȃ�����") << endl;
}
