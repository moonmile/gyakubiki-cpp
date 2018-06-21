#include <iostream>
#include <string>
using namespace std;

class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }			// デフォルトコンストラクタ
	~Base() { ; }					// デストラクタ
	
	int getValue() { return m_val; }
	int setValue( int v ) throw ( string * ) { 
		if ( v < 0 || v > 10 ) {
			throw new string("parameter is over number.");
		}
		return m_val = v; 
	}
	int addValue( int v ) throw ( string * ) { 
		if ( m_val + v < 0 || m_val + v > 10 ) {
			throw new string("parameter is over number.");
		}
		return m_val += v; 
	}
};

int main( void )
{
	Base a;
	
	// 例外は発生しない
	try {
		a.setValue( 5 );	
		a.addValue( 3 );
		cout << "a.getValue: " << a.getValue() << endl;
	} catch ( string *e ) {
		cout << "exception: " << *e << endl;
	}
		
	// 例外が発生する
	try {
		a.setValue( 5 );	
		a.addValue( 10 );
		cout << "a.getValue: " << a.getValue() << endl;
	} catch ( string *e ) {
		cout << "exception: " << *e << endl;
	}
}

