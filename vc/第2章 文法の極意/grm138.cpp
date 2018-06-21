#include <iostream>
using namespace std;

class Base {
	int m_val;
public:
	Base() { m_val = 0; }
	
	int setValue( int v ) { return m_val = v; }
	int getValue() { return m_val; }
	static int plus( int x, int y ) { return x+y; }
};
void main( void )
{
	Base a;
	
	a.setValue( 10 );
	cout << "a.getValue: " << a.getValue() << endl;
	cout << "a.plus: " << a.plus( 10, 20 ) << endl;
	// クラス名を使って static method を使う
	cout << "Base::plus: " << Base::plus( 10, 20 ) << endl;
}	

