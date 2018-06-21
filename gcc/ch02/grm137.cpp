#include <iostream>
using namespace std;

class Base {
	static int m_inst;
	int m_val;
public:
	Base() { m_val = m_inst++ ;}
	int getValue() { return m_val; }
};

int Base::m_inst = 0;

int main( void )
{
	Base a[3];
	
	cout << "a[0].getValue: " << a[0].getValue() << endl;
	cout << "a[1].getValue: " << a[1].getValue() << endl;
	cout << "a[2].getValue: " << a[2].getValue() << endl;
}	

