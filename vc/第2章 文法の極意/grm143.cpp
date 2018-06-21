#include <iostream>
using namespace std;

class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }			// デフォルトコンストラクタ
	Base( int n ) {	m_val = n; }	// 引数を持つコンストラクタ
	~Base() { ; }					// デストラクタ
	
	int getValue() { return m_val; }
	int setValue( int v ) { return m_val = v; }
	int addValue( int v ) { return m_val += v; }
};

void main( void )
{
	Base *a = new Base();
	Base *b = new Base(10);
	
	cout << "a->getValue: " << a->getValue() << endl;
	cout << "b->getValue: " << b->getValue() << endl;
	
	a->addValue( 20 );
	cout << "a->getValue: " << a->getValue() << endl;
	cout << "b->getValue: " << b->getValue() << endl;
	
	delete a, b;
}

