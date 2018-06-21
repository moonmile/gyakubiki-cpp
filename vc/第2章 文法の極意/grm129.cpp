#include <iostream>
using namespace std;

class Base {
private:
	int m_val;		
public:
	Base() { m_val = 0; }
	~Base() {;}
	int getValue() {
		return m_val;
	}
	int setValue( int v ) {
		return m_val = v;
	}
};
void main( void )
{
	Base b;

	cout << "val: " << b.getValue() << endl;
	b.setValue( 10 );
	cout << "val: " << b.getValue() << endl;
}
