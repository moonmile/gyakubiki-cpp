#include <string>
#include <iostream>
using namespace std;

// �������Ƃ��Ďw��
void string_value( string str ) 
{
	cout << "string_value    :"
		<< "[" << hex << (int)str.data() << "]"
		<< "["  << str << "]" << endl;
	str = "hello WORLD.";
}
// �|�C���^�Ŏw��
void string_pointer( string *pstr ) 
{
	cout << "string_pointer  :"
		<< "[" << hex << (int)pstr->data() << "]"
		<< "["  << *pstr << "]" << endl;
	*pstr = "HELLO WORLD.";
}
// �Q�ƂŎw��
void string_reference( string &str ) 
{
	cout << "string_reference:"
		<< "[" << hex << (int)str.data() << "]"
		<< "["  << str << "]" << endl;
	str = "HELLO world.";
}


void main( void )
{
	string str1("Hello world.");
	cout << "string          :"
		<< "[" << hex << (int)str1.data() << "]"
		<< "["  << str1 << "]" << endl;
	
	string_value( str1 );
	string_pointer( &str1 );
	string_reference( str1 );

	cout << "string          :"
		<< "[" << hex << (int)str1.data() << "]"
		<< "["  << str1 << "]" << endl;
	
}
