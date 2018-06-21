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

bool comp( RGB& left, RGB &right )
{
	if ( left.r == right.r &&
		 left.g == right.g &&
		 left.b == right.b ) {
		return true;
	}
	return false;
}

int main( void )
{
	vector <RGB> v1, v2;
	vector <RGB>::iterator it;
	int i;

	for ( i=0; i<10; i++ ) {
		v1.push_back( RGB(i,i,i));
	}
	v2.push_back(RGB(3,3,3));
	v2.push_back(RGB(4,4,4));
	v2.push_back(RGB(5,5,5));
	// ベクタ v1 からベクタ v2 を探す
	it = search ( v1.begin(), v1.end(), v2.begin(), v2.end(), comp );
	cout << "v1 内に v2 が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;

	v2.clear();
	v2.push_back(RGB(3,3,3));
	v2.push_back(RGB(4,4,4));
	v2.push_back(RGB(0,0,0));
	// ベクタ v1 からベクタ v2 を探す
	it = search ( v1.begin(), v1.end(), v2.begin(), v2.end(), comp );
	cout << "v1 内に v2 が" << 
		((it == v1.end())? "見つからなかった": "見つかった") << endl;
}	

