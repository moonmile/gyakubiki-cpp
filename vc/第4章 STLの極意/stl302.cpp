#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main( void )
{
	string file = "stl302.cpp";
	fstream fs( file, std::ios::in );
	if ( !fs ) {
		cerr << "can't open file " << file << endl;
		return 1;
	}
	string buf ;
	getline( fs, buf );
	cout << "���͒l:" << buf << endl;
	fs.ignore( 10 ); // 10 �o�C�g��������
	getline( fs, buf );
	cout << "���͒l:" << buf << endl;
	return 0;
}
