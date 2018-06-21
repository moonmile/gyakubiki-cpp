#include <iostream>
using namespace std;

void main( void )
{
	char buf[100], ch;
	cout << "“ü—Í•¶Žš: " ;
	
	ch = cin.peek();
	cout << "peek ‚µ‚½•¶Žš: " << ch << endl;
	ch = cin.get();
	cout << "get ‚µ‚½•¶Žš: " << ch << endl;
	ch = cin.peek();
	cout << "peek ‚µ‚½•¶Žš: " << ch << endl;

	cin.ignore( 10 );
	cout << "10 ƒoƒCƒg“Ç‚ÝŽÌ‚Ä" << endl;
	ch = cin.peek();
	cout << "peek ‚µ‚½•¶Žš: " << ch << endl;
	ch = cin.get();
	cout << "get ‚µ‚½•¶Žš: " << ch << endl;
}
