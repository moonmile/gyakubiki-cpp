#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string str1("Hello world.");
	
	cout << "�S��                : "
		<< str1 << endl;
	cout << "�E����3����         : " 
		<< str1.substr( 0,3 ) << endl;
	cout << "3��������6�����ڂ܂�: "  
		<< str1.substr( 3,6 ) << endl;
	cout << "6�����ڈȍ~         : " 
		<< str1.substr( 6 ) << endl;
	cout << "6�����ڈȍ~         : " 
		<< str1.substr( 6, string::npos ) << endl;

string s = "Hello C/C++ World.";
string s1 = s.substr(0,5); 			// left$(s, 5)�Ɠ���
string s2 = s.substr(s.size()-6);	// right$(s,6)�Ɠ���
string s3 = s.substr(6,5);			// mid$(s,6,5)�Ɠ���
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}
