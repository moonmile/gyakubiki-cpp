#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main( void )
{
	char file[] = "stl322.cpp";
	fstream fs;
	fs.open( file, ios::in );
	if ( !fs ) {
		cerr << "can't open file " << file << endl;
		return 0;
	}
	
	// １バイト読み込み
	char ch;
	fs >> ch;
	cout << "１バイト読み込み: " << ch << endl;
	
	// １行読み込み
	string buf;
	getline( fs, buf );
	cout << "１行読み込み: " << buf << endl;
	fs.close();
	
	return 1;
}
