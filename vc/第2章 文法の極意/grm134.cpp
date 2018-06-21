#include <iostream>
using namespace std;

class Base {
private:
	int m_val;									// 継承不可能

protected:
	int getValue() { return m_val; }			// 継承可能
protected:
	int setValue(int v) { return m_val = v; }	// 継承可能
public:
	Base() {
		m_val = 0;
	}
};

class Sub : public Base {
public:
	Sub() {;}
//	int nouseGetValue() { return m_val; }				// エラー
//	int nouseSetValue( int v ) { return m_val = v; }	// エラー
	int useGetValue() { return getValue(); }
	int useSetValue(int v) { return setValue(v); }
};

void main( void )
{
	Sub a;
	
//	a.m_val = 10;			// エラー
//	a.setValue( 10 );		// エラー
	a.useSetValue( 10 );
	cout << "useGetValue: " << a.useGetValue() << endl;
}	
	
