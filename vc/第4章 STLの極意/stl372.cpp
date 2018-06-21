#include <iostream>
#include <vector>
using namespace std;

void main( void )
{
	vector <int> v0;
	vector <int> v1(10);
	
#if _MSC_VER
	cout.setf( ios::boolalpha );
#endif
    cout << "v0.empty() = " << v0.empty() << endl;
	cout << "v1.empty() = " << v1.empty() << endl;

	// clear ƒƒ\ƒbƒh‚Å‹ó‚É‚·‚é
	v1.clear();
	cout << "v1.empty() = " << v1.empty() << endl;
}
