#include <iostream>
using namespace std;

class Base {
	int m_val;
public:
	Base() { 
		cout << "Base::constractor" << endl; 
		m_val = 0; }
	Base( int v ) {
		cout << "Base::constractor v: " << v << endl;
		m_val = v; }
	int setValue( int v ) { return m_val = v; }
	int getValue() { return m_val; }
};
void main( void )
{
	Base a;
	cout << "a.getValue: " << a.getValue() << endl;
	
	Base b( 10 );
	cout << "b.getValue: " << b.getValue() << endl;

//	Base b( "val" );		// ƒGƒ‰[
}	

