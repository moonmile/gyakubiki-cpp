#include <iostream>
#include <fstream>
using namespace std;

void main( void )
{
	char *file = "stl324.cpp";
	fstream s( file, ios::in );
	if ( s.fail() ) {
		cout << "can't open file: " << file << endl;
	} else {
		cout << "can open file: " << file << endl;
		s.close();
	}
	
	file = "sample_none_file.txt";
	fstream s2( file, ios::in );
	if ( s2.fail() ) {
		cout << "can't open file: " << file << endl;
	} else {
		cout << "can open file: " << file << endl;
		s2.close();
	}
}
