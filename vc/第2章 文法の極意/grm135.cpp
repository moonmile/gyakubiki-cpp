#include <iostream>
using namespace std;

class Base {
	friend class SubA;
private:
	int m_val;									// �p���s�\
private:
	int setValue( int v ) { return m_val = v; }
public:
	int getValue() { return m_val; }
public:
	Base() {
		m_val = 0;
	}
};

class SubA : public Base {
public:
	SubA() { ; }
	
	int useGetValue() { return m_val; }
	int useSetValue(int v) { return m_val = v; }
};
class SubB : public Base {
public:
	SubB() { ; }
	
//	int useGetValue() { return m_val; }	// �G���[
//	int useSetValue(int v) { return m_val = v; }	// �G���[
};

void main( void )
{
	SubA a;
	SubB b;
	
	cout << "a.getValue: " << a.getValue() << endl;
//	a.setValue( 10 );		// �G���[
	a.useSetValue( 10 );	
	cout << "a.useGetValue: " << a.useGetValue() << endl;
}	
	
