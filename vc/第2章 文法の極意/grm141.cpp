#include <iostream>
using namespace std;

class Base {
protected:
	// 継承先のクラスで使うように protected にしておく
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

// Base クラスのメソッドを使うので public で継承する
class Sub : public Base 
{
public:
	Sub(){;}
	int addValue( int x ) {
		// Base クラスのメンバ変数を変更
		return m_val += x;
	}
	// 関数のオーバーライド
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
