#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class RGB {
public:
	int r, g, b ;
	RGB() : r(0),g(0),b(0) {};
	RGB( int _r, int _g, int _b ) {
		r = _r;
		g = _g;
		b = _b;
	}
};

bool comp( const RGB& left, const RGB& right )
{
	if ( left.r == right.r &&
		 left.g == right.g &&
		 left.b == right.b ) {
		return true;
	}
	return false;
}

void main( void )
{
	vector <RGB> v1;
	vector <RGB>::iterator it;
	int i;
	RGB val;

	for ( i=0; i<10; i++ ) {
		v1.push_back( RGB(i,i,i));
	}

	// ベクタ v1 から値 val を探す
	val = RGB(3,3,3);
	it = search_n ( v1.begin(), v1.end(), 1, val, comp );
	cout << "v1 内に val が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;
}	
