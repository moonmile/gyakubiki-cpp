#include <iostream>
using namespace std;

class Base {
	int m_val;
public:
	Base() { 
		cout << "Base::constractor" << endl; 
		m_val = 0; }
	~Base() {
		cout << "Base::destractor" << endl;
	}
	int setValue( int v ) { return m_val = v; }
	int getValue() { return m_val; }
};
int main( void )
{
	Base a;
	cout << "a.getValue: " << a.getValue() << endl;
	
	Base *b = new Base();
	cout << "b->getValue: " << b->getValue() << endl;
	delete b;
}	

