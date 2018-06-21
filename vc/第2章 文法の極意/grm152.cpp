#include <iostream>
#include <vector>
#include <exception>
using namespace std;

void main( void )
{
	vector <int> vec(10);
	int i;
	
	for ( i=0; i<vec.size(); i++ ) vec[i] = i;

	try {
		cout << "vec.at(5): " << vec.at(5) << endl;
		cout << "vec.at(-1): " << vec.at(-1) << endl;
	} catch ( out_of_range &e ) {
		cout << "Exceptoin: " << e.what() << endl;
	} catch ( exception &e ) {
		cout << "Exceptoin: " << e.what() << endl;
	}
}

