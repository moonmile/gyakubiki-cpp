#include <iostream>
using namespace std;

class Base 
{
	int m_val;		// プライベートメンバ

public:
	Base() { m_val = 0; }
	
	int getValue( void ) { return m_val; }
	int setValue( int v ) { return m_val = v; }
	
private:
	void calc( void ) { m_val *= 2; }
public:
	int Calc( void ) { 
		calc();
		return m_val;
	}
}; 


void main( void )
{
	Base a;
	
//	a.m_val = 10;						// エラー
//	cout << "val: " << a.m_val << endl; // エラー
	a.setValue( 10 );
	cout << "val: " << a.getValue() << endl; 
	
// 	a.calc();							// エラー
	a.Calc();
	cout << "val: " << a.getValue() << endl; 
}
	
