#include <iostream>
using namespace std;

class Base1 {
protected:
	int m_val;		
public:
	Base1() { m_val = 0; }
	~Base1() {;}
	int getValue() { return m_val; }
	int setValue( int v ) { return m_val = v; }
};

class Base2 {
protected:
	int m_val;		
public:
	Base2() { m_val = 0; }
	~Base2() {;}
	int addValue( int x ) { return m_val += x; }
};


class Sub : public Base1, public Base2
{
public:
	Sub(){;}
};

int main( void )
{
	Sub  sub;

	cout << "val: " << sub.getValue() << endl;
	sub.setValue( 10 );
	cout << "val: " << sub.getValue() << endl;
	int v = sub.addValue( 10 );
	cout << "val: " << v << endl;
}
