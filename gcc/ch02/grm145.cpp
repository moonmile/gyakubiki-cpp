#include <iostream>
using namespace std;

class Base {
private:
	int m_val;
	
public:
	Base() { m_val = 0; }
	int getValue() {
		return this->m_val;
	}
	int setValue( int v ) {
		return this->m_val = v;
	}
};
int main( void )
{
	Base b;

	cout << "val: " << b.getValue() << endl;
	b.setValue( 10 );
	cout << "val: " << b.getValue() << endl;
}
