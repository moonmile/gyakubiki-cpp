#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Ave {
	int num;
	int sum;
public:
	Ave() : num(0), sum(0) {}
	void operator () ( int elem ) {
		num++;
		sum += elem;
	}
	operator double () {
		return (double)sum / (double)num;
	}
};

void main( void )
{
	vector <int> v(10);
	int i;

	for ( i=0; i<v.size(); i++ ) v[i] = i;
	for ( i=0; i<v.size(); i++ ) cout << v[i] << "," ;
	cout << endl;

	double d = for_each ( v.begin(), v.end(), Ave() );
	cout << "ave: " << d << endl;
}
