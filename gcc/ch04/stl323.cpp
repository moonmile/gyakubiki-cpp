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
    // １行読み込み
    string buf;
    while ( !fs.eof() ) {
        getline( fs, buf );
        cout << "１行読み込み: " << buf << endl;
    }
    // ストリームを閉じる
    fs.close();

    return 1;
}
