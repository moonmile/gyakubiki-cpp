#include <string>
#include <iostream>

using namespace std;

void main( void )
{
	string str1("cat");
	string str2("dog");
	string str3("cats");
	

	cout << str1 << "��" << str1 << "���r " << str1.compare( str1 ) << endl;
	cout << str1 << "��" << str2 << "���r " << str1.compare( str2 ) << endl;
	cout << str2 << "��" << str1 << "���r " << str2.compare( str1 ) << endl;
	cout << str1 << "��" << str3 << "���r " << str1.compare( str3 ) << endl;
	
	// "==" ���Z�q���g���Ă��������Ƃ��ł���
	cout << str1 << "��" << str2 << "���r " 
		<< ((str1 == str2)? "true": "false") << endl;
	cout << str1 << "��" << str1 << "���r " 
		<< ((str1 == str1)? "true": "false") << endl;
	
#ifdef _MSC_VER
	// VC �̏ꍇ�͕��������w�肵�Ĕ�r�ł��܂�
	cout << str3 << "��" << str1 << "��3������r " 
		<< str3.compare( 0,3, str1 ) << endl;
	cout << str1 << "��" << str3 << "��3������r " 
		<< str1.compare( 0,3, str3,0,3 ) << endl;
#else
	// gcc �̏ꍇ�͔�r�����������Ɏw�肵�܂��B
	cout << str3 << "��" << str1 << "��3������r "
		<< str3.compare( str1, 0,3 ) << endl;
#endif
}
