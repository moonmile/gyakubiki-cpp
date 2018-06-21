#include <iostream>
#include <string>
using namespace std;

class Base 
{
public:
	void func(void) {
		cout << "func in Base" << endl;
	}
	virtual void vfunc(void) {
		cout << "vfunc in Base" << endl;
	}
};

class Sub : public Base 
{
public:
	void func(void) {
		cout << "func in Sub" << endl;
	}
	void vfunc(void) {
		cout << "vfunc in Sub" << endl;
	}
};

void main( void )
{
	Sub a;
	a.func();
	a.vfunc();
	
	Base *b = new Sub();	// ���N���X�Ŏ󂯂�
	b->func();				// ���N���X�̃��\�b�h�Ăяo��
	b->vfunc();				// �p����N���X�̃��\�b�h�Ăяo��
	delete b;
}	
