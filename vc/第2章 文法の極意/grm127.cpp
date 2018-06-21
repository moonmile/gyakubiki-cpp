#include <stdio.h>

template <class T>
class INC 
{
private:
	T _n ;
public:	
	INC() { _n = 0; }
	T inc() {
		_n++;
		return _n;
	};
	T dec() {
		_n--;
		if ( _n < 0 ) _n = 0;
		return _n;
	}
};

void main( void )
{
	class INC<int> inc_int;
	
	printf( "n: %d\n", inc_int.inc() );
	printf( "n: %d\n", inc_int.inc() );
	printf( "n: %d\n", inc_int.dec() );
	printf( "n: %d\n", inc_int.dec() );
}
