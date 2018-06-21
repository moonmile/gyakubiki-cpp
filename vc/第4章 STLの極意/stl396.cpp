#include <iostream>
#include <list>
using namespace std;

class RGB 
{
public:
	int r,g,b;
	RGB() {
		r = g = b = 0;
	}
	RGB( int _r, int _g, int _b ) {
		this->r = _r;
		this->g = _g;
		this->b = _b;
	}
};

bool operator ==( const RGB& left, const RGB& right ) {
	if ( left.r == right.r && left.g == right.g && left.b == right.b ) {
		return true;
	} 
	return false;
}

void main( void )
{
	list<char> lst1, lst2;
	int i;
	
	lst1.push_back('C');
	lst1.push_back('+');
	lst1.push_back('+');
	lst2.push_back('J');
	lst2.push_back('a');
	lst2.push_back('v');
	lst2.push_back('a');
	
	if ( lst1 != lst2 ) {
		cout << "2‚Â‚Ìlist‚ÍˆÙ‚È‚é" << endl ;
	} else {
		cout << "2‚Â‚Ìlist‚Í“™‚µ‚¢" << endl ;
	}
	
	list<RGB> col1, col2;
	col1.push_back( RGB(0,0,0));
	col1.push_back( RGB(100,0,0));
	col1.push_back( RGB(255,0,0));
	col2.push_back( RGB(0,0,0));
	col2.push_back(RGB(100,0,0));
	col2.push_back(RGB(255,0,0));
	
	if ( col1 == col2 ) {
		cout << "2‚Â‚Ìlist‚Í“™‚µ‚¢" << endl ;
	} else {
		cout << "2‚Â‚Ìlist‚ÍˆÙ‚È‚é" << endl ;
	}
	
}
