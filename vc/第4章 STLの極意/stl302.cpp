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
	cout << "入力値:" << buf << endl;
	fs.ignore( 10 ); // 10 バイト無視する
	getline( fs, buf );
	cout << "入力値:" << buf << endl;
	return 0;
}
