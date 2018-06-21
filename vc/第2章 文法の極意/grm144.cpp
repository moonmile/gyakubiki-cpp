#include <iostream>
using namespace std;

class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }			// �f�t�H���g�R���X�g���N�^
	Base( int n ) {	m_val = n; }	// ���������R���X�g���N�^
	~Base() { 						// �f�X�g���N�^
		cout << "Base::~Base()" << endl;
	}
	
	int getValue() { return m_val; }
	int setValue( int v ) { return m_val = v; }
	int addValue( int v ) { return m_val += v; }
};

void main( void )
{
	Base *a = new Base();
	a->setValue(0);
	delete a;	// ���
	
	Base *b = new Base[5]();
	for ( int i=0; i<5; i++ ) 
	{
		b[i].setValue(0);
	}
	// ���
	delete [] b;
}

