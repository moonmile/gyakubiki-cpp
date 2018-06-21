#include <iostream>
using namespace std;

class Base {
protected:
	// �p����̃N���X�Ŏg���悤�� protected �ɂ��Ă���
	int m_val;		
public:
	Base() { m_val = 0; }
	~Base() {;}
	int getValue() {
		return m_val;
	}
	int setValue( int v ) {
		return m_val = v;
	}
};

// Base �N���X�̃��\�b�h���g���̂� public �Ōp������
class Sub : public Base 
{
public:
	Sub(){;}
	int addValue( int x ) {
		// Base �N���X�̃����o�ϐ���ύX
		return m_val += x;
	}
	// �֐��̃I�[�o�[���C�h
	int setValue( int v ) {
		if ( v < 0 ) v = 0;
		m_val = v;
		return m_val;
	}
};

void main( void )
{
	Sub  sub;

	cout << "val: " << sub.getValue() << endl;
	sub.setValue( 10 );
	cout << "val: " << sub.getValue() << endl;
	sub.addValue( -10 );
	cout << "val: " << sub.getValue() << endl;
}
