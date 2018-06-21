#include <iostream>
using namespace std;

class Base {
public:
	// �p����̃N���X�̃C���^�[�t�F�[�X���L�q����
	virtual int getValue( void ) = 0;
	virtual int setValue( int v ) = 0;
};

class Sub : public Base {
private:
	int m_val;
public:
	Sub() { m_val = 0; }
	
	int getValue( void ) { return m_val; }
	int setValue( int v ) { return m_val = v; }
};

void main( void )
{
	Sub a;
	a.setValue( 10 );
	cout << "a.getValue: " << a.getValue() << endl;
	
	// �C���^�[�t�F�[�X�𗘗p���ăA�N�Z�X���\
	Base *b = new Sub();
	b->setValue( 20 );
	cout << "b->getValue: " << b->getValue() << endl;
	delete b;
}
