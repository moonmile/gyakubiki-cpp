#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <int> v(10);
	int i;
	// 添え字を使う
	for ( i=0; i<v.size(); i++ ) {
		v[i] = i;
	}
	for ( i=0; i<v.size(); i++ ) {
		cout << v[i] << ",";
	}
	cout << endl;
}
