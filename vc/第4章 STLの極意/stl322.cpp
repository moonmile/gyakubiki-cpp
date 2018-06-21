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
	
	// ‚PƒoƒCƒg“Ç‚Ýž‚Ý
	char ch;
	fs >> ch;
	cout << "‚PƒoƒCƒg“Ç‚Ýž‚Ý: " << ch << endl;
	
	// ‚Ps“Ç‚Ýž‚Ý
	string buf;
	getline( fs, buf );
	cout << "‚Ps“Ç‚Ýž‚Ý: " << buf << endl;
	fs.close();
	
	return 1;
}
