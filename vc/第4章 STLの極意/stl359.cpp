#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	
	cout << "‘S‘Ì                : "
		<< str1 << endl;
	cout << "‰E‚©‚ç3•¶Žš         : " 
		<< str1.substr( 0,3 ) << endl;
	cout << "3•¶Žš‚©‚ç6•¶Žš–Ú‚Ü‚Å: "  
		<< str1.substr( 3,6 ) << endl;
	cout << "6•¶Žš–ÚˆÈ~         : " 
		<< str1.substr( 6 ) << endl;
	cout << "6•¶Žš–ÚˆÈ~         : " 
		<< str1.substr( 6, string::npos ) << endl;

string s = "Hello C/C++ World.";
string s1 = s.substr(0,5); 			// left$(s, 5)‚Æ“¯‚¶
string s2 = s.substr(s.size()-6);	// right$(s,6)‚Æ“¯‚¶
string s3 = s.substr(6,5);			// mid$(s,6,5)‚Æ“¯‚¶
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}
