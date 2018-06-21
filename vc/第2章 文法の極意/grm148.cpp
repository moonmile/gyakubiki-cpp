#include <iostream>
#include <string>
using namespace std;

class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }			// �f�t�H���g�R���X�g���N�^
	~Base() { ; }					// �f�X�g���N�^
	
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

void main( void )
{
	Base a;
	
	// ��O�͔������Ȃ�
	try {
		a.setValue( 5 );	
		a.addValue( 3 );
		cout << "a.getValue: " << a.getValue() << endl;
	} catch ( string *e ) {
		cout << "exception: " << *e << endl;
	}
		
	// ��O����������
	try {
		a.setValue( 5 );	
		a.addValue( 10 );
		cout << "a.getValue: " << a.getValue() << endl;
	} catch ( string *e ) {
		cout << "exception: " << *e << endl;
	}
}

