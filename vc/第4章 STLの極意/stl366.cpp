#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

void main( void )
{
	vector <int> v1(10);
	for ( int i=0; i<v1.size(); i++ ) {
		v1[i] = i*i;
	}
	cout << "�ŏ��̗v�f:" << v1.front() << endl;
}
