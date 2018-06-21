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

int main( void )
{
	vector <RGB> v1, v2, v3;
	v1.push_back(RGB(0,0,0));
	v1.push_back(RGB(1,1,1));
	v1.push_back(RGB(2,2,2));

	v2.push_back(RGB(0,0,0));
	v2.push_back(RGB(1,1,1));
	v2.push_back(RGB(2,2,2));
	
	v3.push_back(RGB(0,0,0));
	v3.push_back(RGB(9,1,1));
	v3.push_back(RGB(2,2,2));

	cout << "v1 と v2 は " << ((equal(v1.begin(), v1.end(), v2.begin(), comp ) == true)? 
		"等しい": "異なる") << endl;
	cout << "v1 と v3 は " << ((equal(v1.begin(), v1.end(), v3.begin(), comp ) == true)? 
		"等しい": "異なる") << endl;
}	
