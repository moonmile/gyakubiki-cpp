#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main( void )
{
	char file[] = "stl325.cpp";
	fstream s( file, ios::in );
	if ( s.fail() ) {
		cerr << "can't open file " << file << endl;
		return 0;
	}
	
	while ( !s.eof() ) {
		// 10バイトずつ読み込み
		char buf[100];
		buf[10] = '\0' ;
		s.read( buf, 10 );
		cout << "10バイト: " << buf << endl;
	}
	s.close();
	return 1;
}
