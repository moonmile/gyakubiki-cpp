#include <iostream>
using namespace std;

class Base {
private:
	int m_val;
	
	void Reset() {
		m_val = 0;
	}
	
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
int main( void )
{
	Base b;

	cout << "val: " << b.getValue() << endl;
	b.setValue( 10 );
	cout << "val: " << b.getValue() << endl;
	// b.Reset(); // コンパイルエラーになる
}
