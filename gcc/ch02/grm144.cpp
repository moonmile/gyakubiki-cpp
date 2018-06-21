#include <iostream>
using namespace std;

class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }			// デフォルトコンストラクタ
	Base( int n ) {	m_val = n; }	// 引数を持つコンストラクタ
	~Base() { 						// デストラクタ
		cout << "Base::‾Base()" << endl;
	}
	
	int getValue() { return m_val; }
	int setValue( int v ) { return m_val = v; }
	int addValue( int v ) { return m_val += v; }
};

int main( void )
{
	Base *a = new Base();
	a->setValue(0);
	delete a;	// 解放
	
	Base *b = new Base[5]();
	for ( int i=0; i<5; i++ ) 
	{
		b[i].setValue(0);
	}
	// 解放
	delete [] b;
}

