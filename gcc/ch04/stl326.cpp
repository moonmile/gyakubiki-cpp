#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main( void )
{
	char file[] = "sample.txt";
	fstream s( file, ios::out );
	if ( s.fail() ) {
		cerr << "can't open file " << file << endl;
		return 0;
	}
	
	char buf[] = "Hello C++ world.\n";
	for ( int i=0; i<10; i++ ) {
		s << i << ": ";
		s.write( buf, sizeof(buf)-1 );
	}
	s.close();
	return 1;
}
