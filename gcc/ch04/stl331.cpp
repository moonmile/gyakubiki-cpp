#include <string>
#include <iostream>

using namespace std;

int main( void )
{
	string str1("cat");
	string str2("dog");
	string str3("cats");
	

	cout << str1 << "と" << str1 << "を比較 " << str1.compare( str1 ) << endl;
	cout << str1 << "と" << str2 << "を比較 " << str1.compare( str2 ) << endl;
	cout << str2 << "と" << str1 << "を比較 " << str2.compare( str1 ) << endl;
	cout << str1 << "と" << str3 << "を比較 " << str1.compare( str3 ) << endl;
	
	// "==" 演算子を使っても同じことができる
	cout << str1 << "と" << str2 << "を比較 " 
		<< ((str1 == str2)? "true": "false") << endl;
	cout << str1 << "と" << str1 << "を比較 " 
		<< ((str1 == str1)? "true": "false") << endl;
	
#ifdef _MSC_VER
	// VC の場合は文字数を指定して比較できます
	cout << str3 << "と" << str1 << "を3文字比較 " 
		<< str3.compare( 0,3, str1 ) << endl;
	cout << str1 << "と" << str3 << "を3文字比較 " 
		<< str1.compare( 0,3, str3,0,3 ) << endl;
#else
	// gcc の場合は比較文字数を後ろに指定します。
	cout << str3 << "と" << str1 << "を3文字比較 "
		<< str3.compare( 0,3, str1 ) << endl;
#endif
}
