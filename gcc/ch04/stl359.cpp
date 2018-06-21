#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	string str1("Hello world.");
	
	cout << "全体                : "
		<< str1 << endl;
	cout << "右から3文字         : " 
		<< str1.substr( 0,3 ) << endl;
	cout << "3文字から6文字目まで: "  
		<< str1.substr( 3,6 ) << endl;
	cout << "6文字目以降         : " 
		<< str1.substr( 6 ) << endl;
	cout << "6文字目以降         : " 
		<< str1.substr( 6, string::npos ) << endl;

string s = "Hello C/C++ World.";
string s1 = s.substr(0,5); 			// left$(s, 5)と同じ
string s2 = s.substr(s.size()-6);	// right$(s,6)と同じ
string s3 = s.substr(6,5);			// mid$(s,6,5)と同じ
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}
