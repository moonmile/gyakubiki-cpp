#include <string>
#include <iostream>
using namespace std;

int main( void )
{
	const char s[] = "Hello C world.";
	cout << "const char * : " << s << endl;
	string str("Hello C++ world.");
	cout << "string       : " << str << endl;
	char ch = 'A';
	cout << "char         : " << ch << endl;
	bool b  = true;
	cout << "bool         : " << b << endl;
	short sh = 0xFFFF;
	cout << "short        : " << sh << endl;
	unsigned ush = 0xFFFF;
	cout << "short        : " << ush << endl;
	int i = 0xFFFFFFFF;
	cout << "int          : " << i << endl;
	unsigned int ui = 0xFFFFFFFF;
	cout << "unsigned int : " << ui << endl;
	long l = 0xFFFFFFFF;
	cout << "long         : " << l << endl;
	unsigned long ul = 0xFFFFFFFF;
	cout << "unsigned long: " << ul << endl;
	float fl = 10.123;
	cout << "float        : " << fl << endl;
	double db = 10.123;
	cout << "double       : " << db << endl;
	long double ldb = 10.123;
	cout << "long double  : " << ldb << endl;
	void *p = (void*)s;
	cout << "void *       : " << p << endl;
}
