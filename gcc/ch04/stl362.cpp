#include <string>
#include <iostream>
using namespace std;

// 変数を返す
string string_value( void )
{
	return "[string_value]";
}
// ポインタで返す
string *string_pointer( void ) 
{
	string *pstr = new string("[string_pointer]");
	return pstr;
}
// 参照で返す
string &string_reference( void ) 
{
	string *pstr = new string("[string_refernece]");
	return *pstr;
}

int main( void )
{
	string str, *pstr;
	
	str = string_value();
	cout << str << endl;
	
	pstr = string_pointer();
	cout << *pstr << endl;
	delete pstr;
	
	string &str2 = string_reference();
	cout << str2 << endl;
	delete &str2;
	
	string str3 = string_reference();
	cout << str3 << endl;
}
