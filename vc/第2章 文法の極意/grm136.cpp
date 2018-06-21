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
	
	Base *b = new Sub();	// 基底クラスで受ける
	b->func();				// 基底クラスのメソッド呼び出し
	b->vfunc();				// 継承先クラスのメソッド呼び出し
	delete b;
}	
