#include <iostream>
using namespace std;

class Base {
private:
	int m_val;									// �p���s�\

protected:
	int getValue() { return m_val; }			// �p���\
protected:
	int setValue(int v) { return m_val = v; }	// �p���\
public:
	Base() {
		m_val = 0;
	}
};

class Sub : public Base {
public:
	Sub() {;}
//	int nouseGetValue() { return m_val; }				// �G���[
//	int nouseSetValue( int v ) { return m_val = v; }	// �G���[
	int useGetValue() { return getValue(); }
	int useSetValue(int v) { return setValue(v); }
};

void main( void )
{
	Sub a;
	
//	a.m_val = 10;			// �G���[
//	a.setValue( 10 );		// �G���[
	a.useSetValue( 10 );
	cout << "useGetValue: " << a.useGetValue() << endl;
}	
	
