#include <string>
#include <iostream>

using namespace std;

void main( void )
{
	string str1("cat");
	string str2("dog");
	string str3("cats");
	

	cout << str1 << "‚Æ" << str1 << "‚ð”äŠr " << str1.compare( str1 ) << endl;
	cout << str1 << "‚Æ" << str2 << "‚ð”äŠr " << str1.compare( str2 ) << endl;
	cout << str2 << "‚Æ" << str1 << "‚ð”äŠr " << str2.compare( str1 ) << endl;
	cout << str1 << "‚Æ" << str3 << "‚ð”äŠr " << str1.compare( str3 ) << endl;
	
	// "==" ‰‰ŽZŽq‚ðŽg‚Á‚Ä‚à“¯‚¶‚±‚Æ‚ª‚Å‚«‚é
	cout << str1 << "‚Æ" << str2 << "‚ð”äŠr " 
		<< ((str1 == str2)? "true": "false") << endl;
	cout << str1 << "‚Æ" << str1 << "‚ð”äŠr " 
		<< ((str1 == str1)? "true": "false") << endl;
	
#ifdef _MSC_VER
	// VC ‚Ìê‡‚Í•¶Žš”‚ðŽw’è‚µ‚Ä”äŠr‚Å‚«‚Ü‚·
	cout << str3 << "‚Æ" << str1 << "‚ð3•¶Žš”äŠr " 
		<< str3.compare( 0,3, str1 ) << endl;
	cout << str1 << "‚Æ" << str3 << "‚ð3•¶Žš”äŠr " 
		<< str1.compare( 0,3, str3,0,3 ) << endl;
#else
	// gcc ‚Ìê‡‚Í”äŠr•¶Žš”‚ðŒã‚ë‚ÉŽw’è‚µ‚Ü‚·B
	cout << str3 << "‚Æ" << str1 << "‚ð3•¶Žš”äŠr "
		<< str3.compare( str1, 0,3 ) << endl;
#endif
}
