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
	
	// �P�o�C�g�ǂݍ���
	char ch;
	fs >> ch;
	cout << "�P�o�C�g�ǂݍ���: " << ch << endl;
	
	// �P�s�ǂݍ���
	string buf;
	getline( fs, buf );
	cout << "�P�s�ǂݍ���: " << buf << endl;
	fs.close();
	
	return 1;
}
