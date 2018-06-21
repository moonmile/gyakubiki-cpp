#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main( void )
{
    char file[] = "stl323.cpp";
    fstream fs( file, ios::in );
    if ( !fs ) {
        cerr << "can't open file " << file << endl;
        return 0;
    }
    // �P�s�ǂݍ���
    string buf;
    while ( !fs.eof() ) {
        getline( fs, buf );
        cout << "�P�s�ǂݍ���: " << buf << endl;
    }
    // �X�g���[�������
    fs.close();

    return 1;
}
