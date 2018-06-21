#include <iostream>
#include <strstream>
#include <string>
using namespace std;

class Base {
private:
	string m_val;
public:
	Base() { m_val = ""; }
	Base & operator = ( char *v ) {
		m_val = v; return *this; }
	Base & operator + ( char *v ) {
		m_val += v; return *this; }
	Base & operator + ( int n ) {
		strstream s;
		s << n << ends;
		m_val += s.str();
		return *this;
	}
	string getValue() {
		return m_val; }
};

void main( void )
{
	Base a;
	
	a = "Hello, ";
	cout << a.getValue() << endl;
	a = a + "world.";
	cout << a.getValue() << endl;
	a = a + 1;
	a = a + "st?";
	cout << a.getValue() << endl;
}

