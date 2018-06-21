#include <iostream>
#include <stdexcept>
using namespace std;

class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }
	
	int getValue() { return m_val; }
	int setValue( int v )  {
		if ( v < 0 || v > 10 ) 
			throw out_of_range("parameter must be between 0 and 9.");
		return m_val = v; }
	int addValue( int v ) throw( overflow_error & ) {
		if ( m_val+v < 0 || m_val+v > 10 ) 
			throw overflow_error("overflow value.");
		return m_val += v; }
};

void main( void )
{
	Base a;
	
	// ó·äOÇ™î≠ê∂
	try {
		a.setValue(5);
		a.addValue(10);
		cout << "a.getValue: " << a.getValue() << endl;
	} catch ( ... ) {
		cout << "ó·äOÇ™î≠ê∂" << endl;
	}
}	

