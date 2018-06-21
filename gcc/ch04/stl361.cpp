#include <string>
#include <iostream>
using namespace std;

// 仮引数として指定
void string_value( string str ) 
{
	cout << "string_value    :"
		<< "[" << hex << (intptr_t)str.data() << "]"
		<< "["  << str << "]" << endl;
	str = "hello WORLD.";
}
// ポインタで指定
void string_pointer( string *pstr ) 
{
	cout << "string_pointer  :"
		<< "[" << hex << (intptr_t)pstr->data() << "]"
		<< "["  << *pstr << "]" << endl;
	*pstr = "HELLO WORLD.";
}
// 参照で指定
void string_reference( string &str ) 
{
	cout << "string_reference:"
		<< "[" << hex << (intptr_t)str.data() << "]"
		<< "["  << str << "]" << endl;
	str = "HELLO world.";
}


int main( void )
{
	string str1("Hello world.");
	cout << "string          :"
		<< "[" << hex << (intptr_t)str1.data() << "]"
		<< "["  << str1 << "]" << endl;
	
	string_value( str1 );
	string_pointer( &str1 );
	string_reference( str1 );

	cout << "string          :"
		<< "[" << hex << (intptr_t)str1.data() << "]"
		<< "["  << str1 << "]" << endl;
	
}
